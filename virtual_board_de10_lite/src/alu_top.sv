`include "alu_virtual_board_pkg"
import alu_virtual_board_pkg::*;

module alu_virtual_board (
    input   logic [OPERAND_DESIGN:0] arg,
    input   logic [SELECT_W-1:0]     command,
    input   logic                    select_args, load_args, lo_hi_arg,
    input   logic                    carry_in,
    input   logic                    clock, reset,
    output  logic [RESULT_DESIGN:0]  result,
    output  logic [7:0]              flags,
    output  logic                    carry_out,

    output  logic [6:0]              digit5,
    output  logic [6:0]              digit4,
    output  logic [6:0]              digit3,
    output  logic [6:0]              digit2,
    output  logic [6:0]              digit1,
    output  logic [6:0]              digit0
  );
  reg [RESULT_DESIGN:0] arg_a, arg_b; // 8 битная версия аргумента

  wire [3:0]sel_bits;
  wire local_carry;
  wire [1:0] P,G;



  decoder #(.N (2)) select (
            .addr({lo_hi_arg, select_args}),
            .selector(sel_bits)
          );

  generate for (genvar i = 0; i < 2; i = i + 1)
    begin : gen_block // Register A
      register #(.WIDTH(4)) reg_a (
                 .clock   (clock),
                 .reset   (reset),
                 .load    (sel_bits[i] & load_args),
                 .data_in (arg),
                 .data_out(arg_a[4*i +: 4])
               );

      // Register B
      register #(.WIDTH(4)) reg_b (
                 .clock   (clock),
                 .reset   (reset),
                 .load    (sel_bits[i+2] & load_args),
                 .data_in (arg),
                 .data_out(arg_b[4*i +: 4])
               );

      // ALU
      alu_74381 dut_virtual (
                  .A(arg_a[4*i +: 4]),
                  .B(arg_b[4*i +: 4]),
                  .S(command),
                  .P(P[i]),
                  .G(G[i]),
                  .Cn(i == 0 ? carry_in : local_carry),
                  .F(result[4*i +: 4])
                );
    end
  endgenerate

  assign local_carry = G[0] | (P[0] & carry_in);
  assign carry_out = G[1] | (P[1] & (G[0] | (P[0] & carry_in)));

  //### FLAGS
  always_comb
  begin
    // Zero Flag
    flags[0] = (result == 0);
    // Sign Flag
    flags[1] = result[RESULT_DESIGN];
    // Carry Flag
    flags[2] = carry_out;
    // Half-Carry Flag
    flags[3] = (arg_a[3] & arg_b[3]) | ((arg_a[3] | arg_b[3]) & ~result[3]);
    // Overflow Flag
    flags[4] = (arg_a[RESULT_DESIGN] == arg_b[RESULT_DESIGN]) && (result[RESULT_DESIGN] != arg_a[RESULT_DESIGN]);
    // Parity Flag
    flags[5] = ~^result;
    // Equal Flag
    flags[6] = (arg_a == arg_b);
    // A < B Flag
    flags[7] = (arg_a < arg_b);
    // A > B Flag
    // This flag is not directly implemented as a separate flag, but can be derived from the others if needed.
  end

  sseg_driver sseg_driver(
                .arg(arg),
                .select_args(select_args),
                .load_args(load_args),
                .lo_hi_arg(lo_hi_arg),
                .operand_a(arg_a),
                .operand_b(arg_b),
                .result(result),

                .operand_digit(digit5),
                .lo_hi_digit  (digit4),
                .hi_arg_digit (digit3),
                .lo_arg_digit (digit2),
                .hi_res_digit (digit1),
                .lo_res_digit (digit0)
              );

endmodule

















































































































































































