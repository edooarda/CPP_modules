#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return 1;
    }

    try {
        BitcoinExchange BCE("./data.csv");
    }
    catch(const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
}