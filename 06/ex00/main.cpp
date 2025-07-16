#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong Number of Arguments, try again" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);
}