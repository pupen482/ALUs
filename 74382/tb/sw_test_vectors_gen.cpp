#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <ctime>
#include <sstream>
// #include <format>
#include <vector>
#include <random>

#define TEST_VECTOR_SIZE (100u)
#define FILE_TST_VECTOR ("tst_vector.txt")
#define FILE_PORT_A ("port_a.txt")
#define FILE_PORT_B ("port_b.txt")
#define FILE_PORT_CARRY ("carry.txt")
#define FILE_GOLDEN_CARRY ("carry_golden.txt")
#define FILE_GOLDEN_ADD ("add_golden.txt")

template<typename T, typename Allocator>
void write_vector(const std::vector<T, Allocator> &w_vector, std::string filename);

template<typename T>
T random(T range_from, T range_to);

int main()
{
    // std::stringstream str_stream;

    // variables for test vectors generation
    std::vector<bool> carry_in;
    std::vector<bool> carry_out;
    std::vector<uint16_t> port_a, port_b;
    std::vector<uint32_t> result;

    // out_stream.open(FILE_TST_VECTOR);

    std::string out_string;
    srand(std::time(0));

    for (size_t i = 0; i < TEST_VECTOR_SIZE; i++)
    {
        port_b.push_back(random(0x0, 0xFFFF));
        port_a.push_back(random(0x0, 0xFFFF));
        carry_in.push_back(random(0, 1));
        result.push_back(port_a[i] + port_b[i] + (uint16_t)carry_in[i]);
        carry_out.push_back(result[i] >> 16);

        // out_string = std::format("{:4X} {:4X} {:1X} {:1X} {:4X}", port_a, port_b, carry_in, carry_out, result);
        // out_stream << out_string << std::endl;

        // str_stream << std::hex << port_a << std::endl;
    }

    write_vector(port_a,    FILE_PORT_A);
    write_vector(port_b,    FILE_PORT_B);
    write_vector(carry_in,  FILE_PORT_CARRY);
    write_vector(carry_out, FILE_GOLDEN_CARRY);
    write_vector(result,    FILE_GOLDEN_ADD);
}

template<typename T, typename Allocator>
void write_vector(const std::vector<T, Allocator> &w_vector, std::string filename)
{
    // files writing streams
    std::ofstream out_stream;
    out_stream.open(filename);

    for (int i = 0; i < TEST_VECTOR_SIZE; i++)
    {
        out_stream << std::hex << w_vector[i] << std::endl;
    }

    out_stream.close();
}

template<typename T>
T random(T range_from, T range_to)
{
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<T>    distr(range_from, range_to);
    return distr(generator);
}