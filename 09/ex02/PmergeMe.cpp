#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::PmergeMe(char **argv){
    validateInput(argv);
}

// PmergeMe::PmergeMe(const PmergeMe &other){
//     this->numbers = other.numbers;
// }

// PmergeMe& PmergeMe::operator=(const PmergeMe &other)
// {
//     if(this != &other)
//     {
//         this->numbers = other.numbers;
//     }
//     return *this;
// }

PmergeMe::~PmergeMe()
{
}

void PmergeMe::validateInput(char **argv)
{
    int i = 1;
    while(argv[i])
    {
        int j = 0;
        while(argv[i][j])
        {
            if(!isdigit(argv[i][j]))
                throw std::invalid_argument("Not a number");
            j++;
        }
        i++;
    }

    i = 1;
    while(argv[i])
    {
        long int number = std::stol(argv[i]);
        if(number > INT_MAX)
            throw std::invalid_argument("Long than MAX_INT");
        i++;
    }
}
