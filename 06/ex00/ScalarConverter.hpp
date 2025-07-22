#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <iomanip>
#include <limits>

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter& other) = default;
        ScalarConverter(const ScalarConverter& other) = default;
        ~ScalarConverter();
    public:
        static void convert(const std::string& input);
};

#endif