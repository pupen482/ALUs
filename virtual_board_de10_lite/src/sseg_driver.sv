module sseg_driver(
    input   logic [OPERAND_DESIGN:0] arg,
    input   logic                    select_args, load_args, lo_hi_arg,
    input   logic [RESULT_DESIGN:0]  operand_a,
    input   logic [RESULT_DESIGN:0]  operand_b,
    input   logic [RESULT_DESIGN:0]  result,

    output  logic [6:0]              operand_digit,
    output  logic [6:0]              lo_hi_digit,
    output  logic [6:0]              hi_arg_digit,
    output  logic [6:0]              lo_arg_digit,
    output  logic [6:0]              hi_res_digit,
    output  logic [6:0]              lo_res_digit
  );

  localparam X = 7'b1111111;
  localparam Y = 7'b1101110;
  localparam H = 7'b1110110;
  localparam L = 7'b0111000;


  assign operand_digit = select_args ? Y : X;
  assign lo_hi_digit = lo_hi_arg ? H : L;


  num2sseg hi_arg(
             .num_in(lo_hi_arg ? arg : (select_args ? operand_b[RESULT_DESIGN : 4] : operand_a[RESULT_DESIGN : 4])),
             .sseg_out(hi_arg_digit)
           );

  num2sseg lo_arg(
             .num_in(~lo_hi_arg ? arg : (select_args ? operand_b[3:0] : operand_a[3:0])),
             .sseg_out(lo_arg_digit)
           );

  num2sseg hi_res(
             .num_in(result[RESULT_DESIGN : 4]),
             .sseg_out(hi_res_digit)
           );

  num2sseg lo_res(
             .num_in(result[3:0]),
             .sseg_out(lo_res_digit)
           );















endmodule
