#include <verilated.h>
#include "Valu_74381.h"  
#include <iostream>
#include <bitset>
#include <verilated_vcd_c.h>



int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Valu_74381* dut = new Valu_74381;

    VerilatedVcdC* vcd = nullptr;
    Verilated::traceEverOn(true); 
	vcd = new VerilatedVcdC;
	dut->trace(vcd, 99);	
	vcd->open("out.vcd");	

    const std::string GREEN = "\033[32m"; 
    const std::string RED = "\033[31m";   
    const std::string RESET = "\033[0m"; 

    struct TestCase {
        uint8_t S0;
        uint8_t S1;
        uint8_t S2;
        uint8_t Cn;
        uint8_t An;
        uint8_t Bn;
        uint8_t expected_F;
        bool expected_G;
        bool expected_P;
        const char* mode;  
    };

    TestCase test_cases[] = {
        {0b0, 0b0, 0b0, 0, 0b0, 0b0, 0b0000, 0, 0, "Clear"},


        {0b1, 0b0, 0b0, 0, 0b0, 0b0, 0b1111, 1, 0, "B minus A"},
        {0b1, 0b0, 0b0, 0, 0b0, 0b1, 0b1110, 0, 0, "B minus A"},
        {0b1, 0b0, 0b0, 0, 0b1, 0b0, 0b0000, 1, 1, "B minus A"},
        {0b1, 0b0, 0b0, 0, 0b1, 0b1, 0b1111, 1, 0, "B minus A"},

        {0b1, 0b0, 0b0, 1, 0b0, 0b0, 0b0000, 1, 0, "B minus A"},
        {0b1, 0b0, 0b0, 1, 0b0, 0b1, 0b1111, 0, 0, "B minus A"},
        {0b1, 0b0, 0b0, 1, 0b1, 0b0, 0b0001, 1, 1, "B minus A"},
        {0b1, 0b0, 0b0, 1, 0b1, 0b1, 0b0000, 1, 0, "B minus A"},


        {0b0, 0b1, 0b0, 0, 0b0, 0b0, 0b1111, 1, 0, "A minus B"},
        {0b0, 0b1, 0b0, 0, 0b0, 0b1, 0b0000, 1, 1, "A minus B"},
        {0b0, 0b1, 0b0, 0, 0b1, 0b0, 0b1110, 0, 0, "A minus B"},
        {0b0, 0b1, 0b0, 0, 0b1, 0b1, 0b1111, 1, 0, "A minus B"},

        {0b0, 0b1, 0b0, 1, 0b0, 0b0, 0b0000, 1, 0, "A minus B"},
        {0b0, 0b1, 0b0, 1, 0b0, 0b1, 0b0001, 1, 1, "A minus B"},
        {0b0, 0b1, 0b0, 1, 0b1, 0b0, 0b1111, 0, 0, "A minus B"},
        {0b0, 0b1, 0b0, 1, 0b1, 0b1, 0b0000, 1, 0, "A minus B"},


        {0b1, 0b1, 0b0, 0, 0b0, 0b0, 0b0000, 1, 1, "A plus B"},
        {0b1, 0b1, 0b0, 0, 0b0, 0b1, 0b1111, 1, 0, "A plus B"},
        {0b1, 0b1, 0b0, 0, 0b1, 0b0, 0b1111, 1, 0, "A plus B"},
        {0b1, 0b1, 0b0, 0, 0b1, 0b1, 0b1110, 0, 0, "A plus B"},


        {0b0, 0b0, 0b1, 0, 0b0, 0b0, 0b0000, 1, 1, "A ⊕ B"},
        {0b0, 0b0, 0b1, 0, 0b0, 0b1, 0b1111, 1, 1, "A ⊕ B"},
        {0b0, 0b0, 0b1, 0, 0b1, 0b0, 0b1111, 1, 0, "A ⊕ B"},
        {0b0, 0b0, 0b1, 0, 0b1, 0b1, 0b0000, 0, 0, "A ⊕ B"},


        {0b1, 0b0, 0b1, 0, 0b0, 0b0, 0b0000, 1, 1, "A + B"},
        {0b1, 0b0, 0b1, 0, 0b0, 0b1, 0b1111, 1, 1, "A + B"},
        {0b1, 0b0, 0b1, 0, 0b1, 0b0, 0b1111, 1, 1, "A + B"},
        {0b1, 0b0, 0b1, 0, 0b1, 0b1, 0b1111, 1, 0, "A + B"},



        {0b0, 0b1, 0b1, 0, 0b0, 0b0, 0b0000, 0, 0, "A ⋀ B"},
        {0b0, 0b1, 0b1, 0, 0b0, 0b1, 0b0000, 1, 1, "A ⋀ B"},
        {0b0, 0b1, 0b1, 0, 0b1, 0b0, 0b0000, 0, 0, "A ⋀ B"},
        {0b0, 0b1, 0b1, 0, 0b1, 0b1, 0b1111, 1, 0, "A ⋀ B"},

  
  
        {0b1, 0b1, 0b1, 0, 0b0, 0b0, 0b1111, 1, 1, "Preset"},
        {0b1, 0b1, 0b1, 0, 0b0, 0b1, 0b1111, 1, 1, "Preset"},
        {0b1, 0b1, 0b1, 0, 0b1, 0b0, 0b1111, 1, 1, "Preset"},
        {0b1, 0b1, 0b1, 0, 0b1, 0b1, 0b1111, 1, 0, "Preset"},
    };

    bool all_passed = true;
    uint64_t time = 0;
    for (const auto& test : test_cases) {
        dut->S = (test.S2 << 2) | (test.S1 << 1) | test.S0;
        dut->A = test.An ? 0b1111 : 0b0000;
        dut->B = test.Bn ? 0b1111 : 0b0000;
        dut->Cn = test.Cn;

         for (int i = 0; i < 10; ++i) {
            dut->eval();
            vcd->dump(time++);
        }

        if (std::bitset<4>(dut->F) != test.expected_F || std::bitset<1>(dut->P) != test.expected_P || std::bitset<1>(dut->G) != test.expected_G) {
            std::cout << "Test failed for mode: " << test.mode << "\n";
            std::cout << "Inputs: S = " << std::bitset<3>((test.S2 << 2) | (test.S1 << 1) | test.S0)
                      << " An = " << std::bitset<4>(dut->A) << " Bn = " << std::bitset<4>(dut->B ) << " Cn = " << std::bitset<1>(dut->Cn) << "\n";
            std::cout << "Expected F: " << std::bitset<4>(test.expected_F)
                      << " P: " << test.expected_P
                      << " G: " << test.expected_G << "\n";
            std::cout << "Got F: " << std::bitset<4>(dut->F)
                      << " P: " << std::bitset<1>(dut->P)
                      << " G: " << std::bitset<1>(dut->G) << "\n";
            all_passed = false;
        }
    }

    if (all_passed) {
        std::cout << GREEN << "All tests passed!" << RESET << std::endl;
    } else {
        std::cout << RED << "Some tests failed." << RESET << std::endl;
    }
    if( vcd )
		vcd->close();

    delete dut;
    return 0;
}
