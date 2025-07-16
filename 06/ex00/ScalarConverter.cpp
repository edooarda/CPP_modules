#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Constructor" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter" << std::endl;
}


static void print_char(int value)
{
    if(value < 0 || value > 127)
    {
        std::cout << "char: impossible" << std::endl;
        return ;
    }
    else if (!std::isprint(value))
    {
        std::cout << "char: Non displayable" << std::endl;
        return ;
    }
    else
    {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    }
}
static bool is_float(const std::string input)
{
    std::string temp = input;
    if (temp.find_last_of("f") == (temp.size() - 1))
    {
        float f = std::stof(temp);
        int i = static_cast<int>(f);
        double d = static_cast<double>(f);

        print_char(i);
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        return true;
    }
    return false;
}

static bool is_pseudo_literal(const std::string& input)
{
    std::string temp = input;
    if (temp[0] == '+')
    {
        temp.erase(temp.begin());
    }
    if (temp.compare("nan") == 0 || temp.compare("-inf") == 0 || temp.compare("inf") == 0)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << temp + "f" << std::endl;
        std::cout << "double: " << temp << std::endl;
        return true;
    }
    else if (temp.compare("nanf") == 0 || temp.compare("-inff") == 0|| temp.compare("inff") == 0)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << temp << std::endl;
        temp.pop_back();
        std::cout << "double: " << temp << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::convert(const std::string& input)
{
    if (input.empty())
    {
        std::cout << "Input cannot be Empty, please try again" << std::endl;
        return ;
    }
    if (is_pseudo_literal(input) == true)
        return ;
    else if (is_float(input) == true)
        return ;
    std::cout << "this is the input     " << input << std::endl;
}