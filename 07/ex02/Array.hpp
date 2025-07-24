#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
    private:
        T*           elements;
        unsigned int n_elements;
    public:
        Array();
        Array(unsigned int n);
        Array& operator=(const Array& other);
        Array(const Array& other);
        ~Array();

        unsigned int size();
        T& operator[](const unsigned int pos);
};

#include "Array.tpp"

#endif