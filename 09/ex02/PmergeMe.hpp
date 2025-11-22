#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <climits>
#include <string>

class PmergeMe{
    private:

    public:
        PmergeMe();
        PmergeMe(char **argv);
        // PmergeMe(const  PmergeMe &other);
        ~PmergeMe();
        // PmergeMe & operator=(const  PmergeMe &other);

    void validateInput(char **argv);


};


#endif