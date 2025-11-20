#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class BitcoinExchange {
    private:
        std::map<std::string, double> dataMap;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string& data);
        BitcoinExchange(const BitcoinExchange &other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange &other);


        bool validateData(const std::string& data);
        bool parseData(const std::string& data);

};

#endif