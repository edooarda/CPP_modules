#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "Constructor" << std::endl;
}

BitcoinExchange::BitcoinExchange(){
    std::cout << "Constructor" << std::endl;
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
    std::cout << "Cpy constructor" << std::endl;

}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << "Cpy Operator" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "Destructor" << std::endl;
}