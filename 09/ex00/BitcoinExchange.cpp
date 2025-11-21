#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const std::string& data){
    validateData(data);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
    this->dataMap = other.dataMap;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if(this != &other)
    {
        this->dataMap = other.dataMap;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

bool BitcoinExchange::validateData(const std::string& data)
{
    std::string file = data;
    if (!(file.substr(file.find_last_of(".") + 1) == "csv"))
    {
        throw std::invalid_argument("Invalid Data File");
        return false;
    }
    if (!parseData(file))
    {
        return false;
    }
    return true;
}

static bool isHeaderValid(const std::string& header, char delimiter)
{
    int i = 0;
    int flag = 0;
    while(header[i])
    {
        char c = header[i];
        if (std::isdigit(c))
            return false;
        if (!std::isalpha(c) && !std::isspace(c) && c != delimiter && c != '_')
            return false;
        if (c == delimiter)
            flag = 1;
        i++;
    }
    if (flag == 1)
        return true;
    return false;
}

bool BitcoinExchange::parseData(const std::string& data)
{
    std::ifstream input(data);
    if (!input.is_open())
    {
        throw std::invalid_argument("Invalid Data File");
        return false;
    }

    std::string str, header;
    std::getline(input,header);
    if (header.empty())
    {
        throw std::invalid_argument("Empty Data File");
        return false;
    }

    if(!isHeaderValid(header, ','))
    {
        throw std::invalid_argument("Invalid Data Header");
        return false;
    }

    while(std::getline(input, str)){
        size_t delimiter_pos = str.find(",");
        if (delimiter_pos == std::string::npos)
            throw std::runtime_error("Delimiter not found");
        std::string key = str.substr(0, delimiter_pos);
        std::string value = str.substr(delimiter_pos + 1);
        double dvalue = stod(value);
        this->dataMap.insert({key, dvalue});
    }
    input.close();

    // printMap();
    return true;
}

void BitcoinExchange::validateInput(const std::string& input)
{
    std::string file = input;
    if (!(file.substr(file.find_last_of(".") + 1) == "txt"))
    {
        throw std::invalid_argument("Invalid Input File");
    }
    parseInput(file);
}

static std::string trimFunction(std::string input)
{
    if (input.empty())
    return input;
    size_t a = 0;
    while (a < input.size() && std::isspace(static_cast<unsigned char>(input[a])))
        ++a;

    size_t b = input.size();
    while (b > 0 && std::isspace(static_cast<unsigned char>(input[b-1])))
        --b;

    return input.substr(a, b - a);
}

static bool dayCheck(std::string str)
{
    try {
        int day = std::stoi(str);
        if (day < 1 || day > 31 || str.length() > 2)
            return false;
    }
    catch(const std::exception&){
        return false;
    }
    return true;
}


static bool monthCheck(std::string str)
{
    try {
        int month = std::stoi(str);
        if (month < 1 || month > 12)
            return false;
    }
    catch(const std::exception&){
        return false;
    }
    return true;
}

static bool yearCheck(std::string str)
{
    try {
        int year = std::stoi(str);
        if (year < 2009 || year > 2025)
            return false;
    }
    catch(const std::exception&){
        return false;
    }
    return true;
}

bool BitcoinExchange::dateValidation(const std::string& date)
{
    std::string str = trimFunction(date);
    if(str.length() > 10)
    {
        std::cout << "ERROR: bad input => " << str << std::endl;
        return false;
    }
    size_t delimiter_pos = str.find_first_of("-");
    if (delimiter_pos == std::string::npos || delimiter_pos > 4)
    {
        std::cout << "ERROR: bad input => " << str << std::endl;
        return false;
    }
    std::string year = str.substr(0, delimiter_pos);
    if (!yearCheck(year))
    {
        std::cout << "ERROR: bad input => " << str << std::endl;
        return false;
    }
    std::string monthandDay = str.substr(delimiter_pos + 1);
    delimiter_pos = monthandDay.find_first_of("-");
    if (delimiter_pos == std::string::npos || delimiter_pos > 2)
    {
        std::cout << "ERROR: bad input => " << str << std::endl;
        return false;
    }
    std::string month = monthandDay.substr(0, delimiter_pos);
    std::string day = monthandDay.substr(delimiter_pos + 1);
    if (!monthCheck(month) || !dayCheck(day))
    {
        std::cout << "ERROR: bad input => " << str << std::endl;
        return false;
    }
    this->date = str;
    return true;
}

bool BitcoinExchange::valueValidation(const std::string& value)
{
    std::string str = trimFunction(value);
    if (value.empty())
        return false;

    try {
        double number = std::stod(str);
        if (number < 0.0 )
        {
            std::cout << "ERROR: not a positive number." << std::endl;
            return false;
        }
        if (number > 1000.0 )
        {
            std::cout << "ERROR: too large a number." << std::endl;
            return false;
        }
        this->value = number;
    }
    catch(const std::exception&){
        return false;
    }
    return true;

}

void BitcoinExchange::parseInput(const std::string& input)
{
    std::ifstream file(input);
    if (!file.is_open())
    {
        throw std::invalid_argument("Invalid Input File");
    }

    std::string str, header;
    std::getline(file,header);
    if (header.empty())
    {
        throw std::invalid_argument("Empty Input File");
    }

    if(!isHeaderValid(header, '|'))
    {
        throw std::invalid_argument("Invalid Input Header");
    }

    while(std::getline(file, str)){
        size_t delimiter_pos = str.find("|");
        if (delimiter_pos == std::string::npos)
        {
            std::cout << "ERROR: bad input => " << str << std::endl;
            continue ;
        }
        std::string date = str.substr(0, delimiter_pos);
        std::string value = str.substr(delimiter_pos + 1);
        if(!dateValidation(date))
        {
            continue ;
        }
        if(!valueValidation(value))
        {
            continue ;
        }
        exchangeValue();
    }
    file.close();
}

void BitcoinExchange::exchangeValue()
{
    auto it = this->dataMap.lower_bound(date);
    double result;

    if (it == this->dataMap.begin())
    {
        std::cerr << "ERROR: no valid date found." << std::endl;
        return ;
    }

    if(it != this->dataMap.end() && it->first == date)
    {
        result = it->second * value;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    else
    {
        --it;
        result = it->second * value;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

void BitcoinExchange::printMap()
{
    for (auto it = this->dataMap.cbegin(); it != this->dataMap.cend(); ++it)
    {
        std::cout << it->first << " " << it->second << "\n";
    }
}