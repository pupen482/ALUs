package alu_virtual_board_pkg;

//--------------------------typedefs--------------------------
localparam SELECT_W = 3;
localparam ORIG_OPERAND_W = 4;
localparam ORIG_RESULT_W  = 4;

localparam OPERAND_DESIGN   = ORIG_OPERAND_W-1;
localparam RESULT_DESIGN    = (ORIG_RESULT_W*2)-1;

typedef enum logic [SELECT_W - 1:0] {
	OP_CLEAR = 0,
	OP_B_SUB_A,
	OP_A_SUB_B,
	OP_ADD,
	OP_XOR,
	OP_OR,
	OP_AND,
	OP_PRESET
} e_operation;

endpackage : alu_virtual_board_pkg
