#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

class RPN {
    private:
        std::stack<unsigned int> numbers;
    public:
        RPN();
        RPN(const std::string& input);
        RPN(const RPN &other);
        ~RPN();
        RPN & operator=(const RPN &other);

        void parseInput(const std::string& input);
        void execution(char op);
        void printResult();
};

#endif