#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <climits>
#include <string>
#include <list>
#include <vector>

class PmergeMe{
    private:

    public:
        PmergeMe();
        PmergeMe(char **argv);
        // PmergeMe(const  PmergeMe &other);
        ~PmergeMe();
        // PmergeMe & operator=(const  PmergeMe &other);

    void validateInput(char **argv);

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

};


#endif