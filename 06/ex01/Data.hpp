#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data{
    private:
        Data(const Data& other) = default;
        Data& operator=(const Data& other) = default;
    public:
        Data() = default;
        ~Data() = default;
        int value;
};

#endif