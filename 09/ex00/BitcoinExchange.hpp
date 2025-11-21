#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>

class BitcoinExchange {
    private:
        std::map<std::string, double> dataMap;
        std::string date;
        double value;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string& data);
        BitcoinExchange(const BitcoinExchange &other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange &other);


        bool validateData(const std::string& data);
        bool parseData(const std::string& data);

        void validateInput(const std::string& input);
        void parseInput(const std::string& input);

        bool valueValidation(const std::string& value);
        bool dateValidation(const std::string& date);

        void exchangeValue();

        void printMap();

};

#endif