#include "Array.hpp"


template <typename T>
Array<T>::Array() : elements(nullptr), lenght(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{

}

template <typename T>
Array<T>::Array(const Array& other)
{

}

template <typename T>
Array<T>::~Array(){
    delete this->elements;
}

template <typename T>
T& Array<T>::operator[](const unsigned int pos)
{
    if(pos >= this->n_elements || pos < 0)
        throw std::out_of_range("Out of the array escope");
    return this->elements[pos];
}


template <typename T>
unsigned int Array<T>::size()
{
    return (this->n_elements);
}