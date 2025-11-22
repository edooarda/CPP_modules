#include "RPN.hpp"

RPN::RPN(){
}

RPN::RPN(const std::string& input){
    parseInput(input);
}

RPN::RPN(const RPN &other){
    this->numbers = other.numbers;
}

RPN& RPN::operator=(const RPN &other)
{
    if(this != &other)
    {
        this->numbers = other.numbers;
    }
    return *this;
}

RPN::~RPN()
{
}


int RPN::execution(char op)
{
    int result;
    unsigned int rightNumber = this->numbers.top();

    switch (op)
    {
    case '+':
        /* code */
        break;
    
    default:
        break;
    }

}

static bool isOperators(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
    {
        return true;
    }
    return false;
}


void RPN::parseInput(const std::string& input)
{
    std::stringstream str(input);
    std::string tokens;
    unsigned int operands;

    while(str >> tokens)
    {
        if(tokens.length() != 1)
        {
            throw std::invalid_argument("not valid input");
        }
        else if(isdigit(tokens[0]))
        {
            // std::cout << "NUMBER: " << tokens << std::endl;
            operands = tokens[0] - '0';
            this->numbers.push(operands);
            // std::cout << this->numbers.top() << std::endl;
        }
        else if(isOperators(tokens[0]))
        {
            std::cout << "Operator: " << tokens << std::endl;
        }
        else
        {
            throw std::invalid_argument("not valid input");
        }
    }

}