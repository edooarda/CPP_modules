#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename T1, typename F>
void iter(T* array, T1 len, F func)
{
    for (T1 i = 0; i < len; ++i)
    {
        func(array[i]);
    }
}

#endif