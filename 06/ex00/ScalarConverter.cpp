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
    if (!isascii(value))
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

static bool is_double(const std::string& input)
{
    if (input.find("f") != std::string::npos)
    {
        std::cout << "This input \"" << input << "\" is INVALID, please try again." << std::endl;
        return false;
    }
    try {
        double d = std::stod(input);
        float f = static_cast<float>(d);

        if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else {
            int i = static_cast<int>(d);
            print_char(i);
            std::cout << "int: " << i << std::endl;
        }
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        return true;
    } catch (const std::invalid_argument& e) {
        std::cout << "This: \"" << input << "\" is a invalid input." << std::endl;
        return false;
    } catch (const std::out_of_range& e){
        std::cout << "Input out of range for double: \"" << input << "\"" << std::endl;
        return false;
    }
}

static bool is_float(const std::string& input)
{
    try {
        float f = std::stof(input);
        double d = static_cast<double>(f);

        if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max()){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else {
            int i = static_cast<int>(f);
            print_char(i);
            std::cout << "int: " << i << std::endl;
        }
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        return true;
    } catch (const std::invalid_argument& e) {
        std::cout << "This: \"" << input << "\" is a invalid input." << std::endl;
        return false;
    } catch (const std::out_of_range& e){
        std::cout << "Input out of range for float: \"" << input << "\"" << std::endl;
        return false;
    }
}

static bool is_int(const std::string& input)
{
    if (input.find("f") != std::string::npos || input.find(".") != std::string::npos)
    {
        std::cout << "This input \"" << input << "\" is INVALID, please try again." << std::endl;
        return false;
    }
    try {
        int i = std::stoi(input);
        float f = static_cast<float>(i);
        double d = static_cast<double>(i);

        print_char(i);
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        return true;
    } catch (const std::invalid_argument& e) {
        std::cout << "This: \"" << input << "\" is a invalid input." << std::endl;
        return false;
    } catch (const std::out_of_range& e){
        std::cout << "Input out of range for int: \"" << input << "\"" << std::endl;
        return false;
    }
}

static bool is_char(const std::string& input)
{
        int i = static_cast<int>(input[0]);
        float f = static_cast<float>(i);
        double d = static_cast<double>(i);

        print_char(i);
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        return true;
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

static bool exist_f(const std::string& input)
{
    if (input.find('f') != std::string::npos && input.find_last_of("f") == (input.size() - 1))
        return true;
    else
        return false;
}

static bool exist_dot(const std::string& input)
{
    if (input[0] != '.' && input.find('.') != std::string::npos && input.find_last_of(".") != (input.size() - 1))
        return true;
    else
        return false;
}

static bool is_valid_digits(const std::string& input)
{
    int isdot = 0;
    int isf = 0;
    for(size_t i = 0; i < input.size(); ++i)
    {
        if(!isdigit(input[i]) && input[i] != '.' && input[i] != '-' && input[i] != '+' && input[i] != 'f')
            return false;
        if (((input[i] == '+' || input[i] == '-') && (input[i + 1] == '.' || input[i + 1] == 'f')) || (input[i] == '.' && input[i + 1] == 'f'))
            return false;
        if (input[i] == '.')
            isdot++;
        if (input[i] == 'f')
            isf++;
    }
    if (isdot > 1 || isf > 1)
        return false;
    return true;
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
    else {
        if (is_valid_digits(input) == true)
        {
            if (exist_dot(input) == true)
            {
                if (exist_f(input) == true)
                {
                    if (is_float(input) == true)
                        return ;
                }
                else
                {
                    if (is_double(input) == true)
                        return ;
                }
            }
            else
            {
                if (is_int(input) == true)
                    return ;
            }
        }
        else if (input.length() == 1)
        {
            if (is_char(input) == true)
                return ;
        }
        else
            std::cout << "IMPOSSIBLE to convert \"" << input << "\", please try again." << std::endl;
    }
}