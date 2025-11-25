#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
}

PmergeMe::PmergeMe(char **argv){
    validateInput(argv);
}

// PmergeMe::PmergeMe(const PmergeMe &other){
// }

// PmergeMe& PmergeMe::operator=(const PmergeMe &other)
// {
//     return *this = other;
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

std::chrono::microseconds PmergeMe::vecFordJohnsonAlgo(std::vector<int>& vec)
{
    if (vec.size() <= 1)
        return std::chrono::microseconds(0);
    auto start = std::chrono::high_resolution_clock::now();
    // steps
    //1- Do pairs
    //2- sort items
    //3- create main chain (also pend)
    //4- insert remaining itens one by one
    (void)vec;

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    return duration;
}

std::chrono::microseconds PmergeMe::listFordJohnsonAlgo(std::list<int>& lis)
{
    if (lis.size() <= 1)
        return std::chrono::microseconds(0);
    auto start = std::chrono::high_resolution_clock::now();
    // steps
    //1- Do pairs
    //2- sort items
    //3- create main chain (also pend)
    //4- insert remaining itens one by one
    (void)lis;

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    return duration;
}