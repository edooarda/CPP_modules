#include "Span.hpp"

Span::Span() : max_elements(0)
{
    std::cout << "Default Constructor" << std::endl;
}

Span::Span(unsigned int N) : max_elements(N)
{
    // std::cout << "Constructor" << std::endl;
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
    // std::cout << "Destructor" << std::endl;
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

unsigned int Span::shortestSpan() // small distance
{
    if (this->container.size() < 2)
    {
        throw tooFewElements();
    }
    std::vector<unsigned int> sorted_container = this->container;
    std::sort(sorted_container.begin(), sorted_container.end());
    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 1; i < sorted_container.size(); ++i) {
        int diff = sorted_container[i] - sorted_container[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

unsigned int Span::longestSpan() // big distance
{
    if (this->container.size() < 2)
    {
        throw tooFewElements();
    }
    auto minmax = std::minmax_element(this->container.begin(), this->container.end());

    // std::cout << "Min: " << *minmax.first << std::endl;
    // std::cout << "Max: " << *minmax.second << std::endl;
    return (*minmax.second - *minmax.first);
}

void Span::printer()
{
    for (auto it = this->container.begin(); it != this->container.end(); ++it)
    {
        std::cout << "Element: " << *it << std::endl;
    }
}

const char* Span::tooFewElements::what() const throw()
{
    return "Error: Too few elements to calculate span";
}