module alu_16_bit (
    input wire [15:0] A,
    input wire [15:0] B,
    input wire [2:0] S,
    input wire Cn,
    output wire [15:0] F,
    // output wire P, G
    output wire Co

  );

  wire [3:0] F0, F1, F2, F3;
  wire P0, P1, P2, P3;
  wire G0, G1, G2, G3;
  wire Cn1, Cn2, Cn3;

  alu_74381 alu0 (
              .A(A[3:0]),
              .B(B[3:0]),
              .S(S),
              .Cn(Cn),
              .F(F0),
              .P(P0),
              .G(G0)
            );

  alu_74381 alu1 (
              .A(A[7:4]),
              .B(B[7:4]),
              .S(S),
              .Cn(Cn1),
              .F(F1),
              .P(P1),
              .G(G1)
            );

  alu_74381 alu2 (
              .A(A[11:8]),
              .B(B[11:8]),
              .S(S),
              .Cn(Cn2),
              .F(F2),
              .P(P2),
              .G(G2)
            );

  alu_74381 alu3 (
              .A(A[15:12]),
              .B(B[15:12]),
              .S(S),
              .Cn(Cn3),
              .F(F3),
              .P(P3),
              .G(G3)
            );

  assign F = {F3, F2, F1, F0};

  assign Cn1 = ~G0 | (~P0 & Cn);
  assign Cn2 = ~G1 | (~P1 & Cn1);
  assign Cn3 = ~G2 | (~P2 & Cn2);
  assign Co =  ~G3 | (~P3 & Cn3);





  //   assign P = P3 & P2 & P1 & P0;
  //   assign G = G3 | (P3 & G2) | (P3 & P2 & G1) | (P3 & P2 & P1 & G0);

endmodule
