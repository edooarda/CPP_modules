#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <limits>

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
        unsigned int shortestSpan();
        unsigned int longestSpan();

        void printer();

        class tooFewElements : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class maxCapacity : public std::exception
        {
            public:
                const char* what() const throw();
        };

        void addRange(std::vector<unsigned int> vec);

};

#endif