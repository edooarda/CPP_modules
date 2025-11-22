#include "PmergeMe.hpp"

// https://dev.to/emuminov/human-explanation-and-step-by-step-visualisation-of-the-ford-johnson-algorithm-5g91

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "Wrong amount of arguments" << std::endl;
        return 1;
    }
    else if ( argc == 2 )
    {
        std::cout << "Amount Already Sorted: " << argv[1] << std::endl;
        return 0;
    }

    try {
        PmergeMe input(argv);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

}