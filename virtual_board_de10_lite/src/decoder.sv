module decoder #(
  parameter N = 2  // Параметр N задает ширину входного адреса
)(
    input     logic [N-1:0] addr,
    output    logic [(1<<N)-1:0] selector
);

always @*
    selector = 1 << addr;
endmodule
