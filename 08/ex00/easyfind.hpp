#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <deque>

template <typename T>
bool easyfind(const T& container, int number)
{
    auto it = std::find(container.begin(), container.end(), number);

    if (it != container.end())
    {
        std::cout << number <<" was find into the container!" << std::endl;
        return true;
    }
    else {
        throw std::out_of_range("ERROR: Number NOT FOUND");
        return false;
    }
}

#endif