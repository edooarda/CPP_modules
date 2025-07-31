#include "Span.hpp"

Span::Span() : max_elements(0)
{
    std::cout << "Default Constructor" << std::endl;
}

Span::Span(unsigned int N) : max_elements(N)
{
    std::cout << "Constructor" << std::endl;
}

Span::Span(const Span& other)
{
    this->max_elements = other.max_elements;
    this->container = other.container;
}

Span& Span::operator=(const Span& other)
{
    if(this != &other){
        this->max_elements = other.max_elements;
        this->container = other.container;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "Destructor" << std::endl;
}

void Span::addNumber(unsigned int number)
{
    if (this->container.size() >= this->max_elements)
    {
        throw std::out_of_range("Error: Container already have the MAX capacity");
        return ;
    }
    this->container.push_back(number);
}

void Span::printer()
{
    for (auto it = this->container.begin(); it != this->container.end(); ++it)
    {
        std::cout << "Element: " << *it << std::endl;
    }
}