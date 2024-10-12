import alu_74382_pkg::*;
import tb_env_pkg::*;

module tb;

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

//--------testcases' tasks includes---------
`ifdef DATASHEET_VECTORS_TEST
    `include "ds_vectors_tst.sv"
`elsif SW_MODEL_COMP_TEST
`endif

//---------------test body------------------
initial begin
    $dumpfile("logs/vlt_dump.vcd");
    $dumpvars();
    err_cnt = 0;

    `ifdef DATASHEET_VECTORS_TEST
        ds_vectors_test();

    `elsif SW_MODEL_COMP_TEST
        $display(">>>> Software model comparison test start...",);
    
    `endif

    $display(">>>>TEST END");
    if (err_cnt)
        $display(">>>>FAIL");
    else
        $display(">>>>SUCCESS");
    $finish;
end

endmodule : tb