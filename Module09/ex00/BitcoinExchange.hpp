#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> dataBase;
    public:
        BitcoinExchange(/* args */);
        typedef std::map<std::string, double>::iterator itrator;
        BitcoinExchange(const BitcoinExchange & bt);
        BitcoinExchange& operator=(const BitcoinExchange& bt);
        void addNumber(double value, std::string date);
        void print();
        double getLowerDate(std::string& date);
        ~BitcoinExchange();
};

int parsing(int *tabdate, double value, std::string& lastDate, std::string& str, std::string& numVaule);
bool isValidDate(int year, int month, int day);
#endif