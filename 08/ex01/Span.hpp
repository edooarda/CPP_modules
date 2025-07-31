#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span {
    private:
        unsigned int max_elements;
        std::vector<unsigned int> container;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(unsigned int number);

        void printer();
};

#endif