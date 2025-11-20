#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "Constructor" << std::endl;
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
    std::cout << "Destructor" << std::endl;
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

bool BitcoinExchange::parseData(const std::string& data)
{
    std::ifstream input(data);
    if (!input.is_open())
    {
        throw std::invalid_argument("Invalid Data File");
        return false;
    }

    std::string str;
    std::getline(input,str);
    if (str.empty())
    {
        throw std::invalid_argument("Empty Data File");
        return false;
    }

    while(std::getline(input, str)){
        if (str.empty())
        {
            throw std::invalid_argument("No Available Data");
            return false;
        }
        size_t delimiter_pos = str.find(",");
        if (delimiter_pos == std::string::npos)
            throw std::runtime_error("Delimiter not found");
        std::string key = str.substr(0, delimiter_pos);
        std::string value = str.substr(delimiter_pos + 1);
        double dvalue = stod(value);
        this->dataMap.insert({key, dvalue});
    }
    input.close();

    // print map
    // for (auto it = this->dataMap.cbegin(); it != this->dataMap.cend(); ++it)
    // {
    //     std::cout << it->first << " " << it->second << "\n";
    // }
    return true;
}