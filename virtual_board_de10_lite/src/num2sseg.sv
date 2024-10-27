//  Nomenclature for the segments on this board is:
//
//          0
//        -----
//       |     |
//      5|     | 1
//       |  6  |
//        -----
//       |     |
//      4|     | 2
//       |     |
//        -----
//          3

module num2sseg(
    input logic [3:0] num_in,
    output logic [6:0] sseg_out
  );

  always_comb
  begin
    case (num_in)
      4'h0:
        sseg_out[6:0] = 7'b0111111;
      4'h1:
        sseg_out[6:0] = 7'b0000110;
      4'h2:
        sseg_out[6:0] = 7'b1011011;
      4'h3:
        sseg_out[6:0] = 7'b1001111;
      4'h4:
        sseg_out[6:0] = 7'b1100110;
      4'h5:
        sseg_out[6:0] = 7'b1101101;
      4'h6:
        sseg_out[6:0] = 7'b1111101;
      4'h7:
        sseg_out[6:0] = 7'b0000111;
      4'h8:
        sseg_out[6:0] = 7'b1111111;
      4'h9:
        sseg_out[6:0] = 7'b1101111;
      4'hA:
        sseg_out[6:0] = 7'b1110111;
      4'hB:
        sseg_out[6:0] = 7'b1111100;
      4'hC:
        sseg_out[6:0] = 7'b1011000;
      4'hD:
        sseg_out[6:0] = 7'b1011110;
      4'hE:
        sseg_out[6:0] = 7'b1111001;
      default :
        sseg_out[6:0] = 7'b1110001;
    endcase

  end
endmodule
