#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(nullptr), n_elements(0)
{
    std::cout << "Constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), n_elements(n)
{
    std::cout << "Constructor with number of elements" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    std::cout << "Copy operator" << std::endl;
    if(this != &other)
    {
        delete [] this->arr;
        this->n_elements = other.n_elements;
        this->arr = new T[other.n_elements];
        for (size_t i = 0; i < other.n_elements; ++i)
        {
            this->arr[i] = other.arr[i];
        }
    }
    return *this;

}

template <typename T>
Array<T>::Array(const Array& other)
{
    std::cout << "Copy Constructor" << std::endl;
    this->n_elements = other.n_elements;
    this->arr = new T[other.n_elements];
    for (size_t i = 0; i < other.n_elements; ++i)
    {
        this->arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>::~Array(){
    std::cout << "Destructor" << std::endl;
    delete [] this->arr;
}

template <typename T>
T& Array<T>::operator[](const unsigned int pos)
{
    if(pos >= this->n_elements)
        throw std::out_of_range("Out of the array escope");
    return this->arr[pos];
}


template <typename T>
unsigned int Array<T>::size()
{
    return (this->n_elements);
}