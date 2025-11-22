#include "RPN.hpp"

// https://www.scaler.com/topics/polish-notation-in-data-structure/

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return 1;
    }
    try {
        RPN rpn(argv[1]);
        rpn.printResult();
    }
    catch(const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}