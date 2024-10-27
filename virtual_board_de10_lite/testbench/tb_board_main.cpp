#include "Valu_virtual_board.h"
#include <iostream>

#include <verilated.h>
#include <verilated_vcd_c.h>


#define GREEN ("\033[32m") 
#define RED ("\033[31m")   
#define RESET ("\033[0m") 
vluint64_t sim_time = 0;


using std::cout;
using std::endl;

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);

	Valu_virtual_board* dut = new Valu_virtual_board;

	VerilatedVcdC* vcd = nullptr;
	Verilated::traceEverOn(true); 
    
	vcd = new VerilatedVcdC;
	dut->trace(vcd, 99);	
	vcd->open("out.vcd");	
	bool all_passed {false};
	

		dut->eval();
		vcd->dump(sim_time++);
			// cout << "Test failed for mode: " << test.mode << "\n";

			// cout << "Inputs: S = " << std::bitset<3>((test.S2 << 2) | (test.S1 << 1) | test.S0)
			// 	 << " An = " << std::bitset<4>(dut->A) 
			// 	 << " Bn = " << std::bitset<4>(dut->B ) 
			// 	 << " Cn = " << std::bitset<1>(dut->Cn) << "\n";

			// cout << "Expected F: " << std::bitset<4>(test.expected_F)
			// 	 << " P: " << test.expected_P
			// 	 << " G: " << test.expected_G << "\n";
				 
			// cout << "Got F: " << std::bitset<4>(dut->F)
			// 	 << " P: " << std::bitset<1>(dut->P)
			// 	 << " G: " << std::bitset<1>(dut->G) << endl;       // В буфере и так уже большой объем данных
			all_passed = false;
	
	if (all_passed) {
		cout << GREEN << "All tests passed!" << RESET << endl;
	} else {
		cout << RED << "Some tests failed!" << RESET << endl;
	}
	if( vcd )
		vcd->close();

	delete dut;
	exit(EXIT_SUCCESS);
}
