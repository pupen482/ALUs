`include "alu_74382_pkg.sv"
import alu_74382_pkg::*;

module tb;

logic [SELECT_W-1:0]    sel;
logic [TB_RESULT_W-1:0] result   ;
logic                   overflow ;
logic                   carry_out;
t_inputs                inputs   ;
t_outputs               outputs  ;
t_outputs               exp_out  ;
int                     err_cnt  ;

alu_74382 #(
    .OPERAND_W(TB_OPERAND_W),
    .RESULT_W (TB_RESULT_W )
) dut_alu (
    .sel      (sel              ),
    .carry_in (inputs.carry_in  ),
    .port_a   (inputs.port_a    ),
    .port_b   (inputs.port_b    ),
    .result   (outputs.result   ),
    .overflow (outputs.overflow ),
    .carry_out(outputs.carry_out)
);

//------------test body------------
initial begin
    $dumpfile("logs/vlt_dump.vcd");
    $dumpvars();
    err_cnt = 0;
    for (int sel_case = 0; sel_case < SEL_MAX; sel_case++) begin
        sel = sel_case[SELECT_W - 1:0];
        for (int in_case = 0; in_case < INPUTS_CASES_NUM; in_case++) begin

            inputs.carry_in = in_case[CARRY_IDX];
            inputs.port_a = extend_bit(in_case[PORT_A_IDX]);
            inputs.port_b = extend_bit(in_case[PORT_B_IDX]);
            
            #1;

            exp_out = expected_table[sel_case][in_case];

            if (exp_out == outputs) begin
                $display("SEL: %b, IN_CASE: %b - [OK]", sel_case[SELECT_W - 1:0], in_case[2:0]);
            end else begin
                err_cnt++;
                $display("SEL: %b, IN_CASE: %b - [FAIL]", sel_case[SELECT_W - 1:0], in_case[2:0]);
                $display("inputs    | sel: %b, port_a:%b, port_b: %b, carry_in: %b", sel, inputs.port_a, inputs.port_b, inputs.carry_in);
                $display("result    | expected: %b, actual: %b", exp_out.result,    outputs.result);
                $display("result_ext| %b", dut_alu.result_ext);
                $display("carry_out | expected: %b, actual: %b", exp_out.carry_out, outputs.carry_out);
                $display("overflow  | expected: %b, actual: %b", exp_out.overflow,  outputs.overflow);
            end
        end
    end

    $display(">>>>TEST END");
    if (err_cnt)
        $display(">>>>FAIL");
    else
        $display(">>>>SUCCESS");
    $finish;
end

endmodule : tb