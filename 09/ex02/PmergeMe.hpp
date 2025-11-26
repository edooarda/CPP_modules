#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <climits>
#include <string>
#include <deque>
#include <vector>
#include <chrono>
#include <utility>
#include <algorithm>

class PmergeMe{
    private:

    public:
        PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(const  PmergeMe &other) = delete;
        ~PmergeMe();
        PmergeMe & operator=(const  PmergeMe &other) = delete;

    void validateInput(char **argv);
    std::chrono::microseconds vecFordJohnsonAlgo(std::vector<int>& vec);
    std::chrono::microseconds deqFordJohnsonAlgo(std::deque<int>& deq);

    std::vector<int> vecSort(std::vector<int> container);
    std::deque<int> deqSort(std::deque<int> container);

    template <typename T>
    T parseNumbers(int argc, char **argv)
    {
        T numbers;

        for(int i = 1; i < argc; ++i)
        {
            try {
                int number = std::stoi(argv[i]);
                numbers.push_back(number);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
                exit(1);
            }
        }
        return numbers;
    }

    template <typename T>
    void printNumbers(const T& container)
    {
        for (auto number : container) {
        std::cout << number << ' ';
        }
    }

    template <typename T>
    void printFunction(std::string word, T container)
    {
        std::cout << word <<": [ ";
        printNumbers(container);
        std::cout << "]" << std::endl;
    }

};


#endif