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


void RPN::execution(char op)
{
    if (this->numbers.size() < 2)
        throw std::invalid_argument("not valid RPN");

    int result;
    int leftNumber = this->numbers.top();
    this->numbers.pop();
    int rightNumber = this->numbers.top();
    this->numbers.pop();

    switch (op)
    {
        case '+':
            result = rightNumber + leftNumber;
            break;
        case '-':
            result = rightNumber - leftNumber;
            break;
        case '*':
            result = rightNumber * leftNumber;
            break;
        case '/':
            if(leftNumber == 0)
            {
                throw std::invalid_argument("division by 0 not allowed");
            }
            result = rightNumber / leftNumber;
            break;
    }
    this->numbers.push(result);
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
            operands = tokens[0] - '0';
            this->numbers.push(operands);
        }
        else if(isOperators(tokens[0]))
        {
            execution(tokens[0]);
        }
        else
        {
            throw std::invalid_argument("not valid input");
        }
    }
}

void RPN::printResult()
{
    if (this->numbers.size() != 1)
    {
        throw std::invalid_argument("not valid RPN");
    }
    std::cout << "Result: " << this->numbers.top() << std::endl;
}