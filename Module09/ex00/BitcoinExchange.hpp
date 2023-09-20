#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        // std::map<std::string, int> dataInput;
        std::map<std::string, double> dataBase;
    public:
        BitcoinExchange(/* args */);
        typedef std::map<std::string, double>::iterator itrator;
        void addNumber(double value, std::string date)
        {
            dataBase.insert(std::map<std::string, double>::value_type(date, value));
        }
        void print()
        {
            for (itrator itr = dataBase.begin(); itr != dataBase.end(); itr++)
                std::cout<< "key : " << itr->first << " value : " << itr->second << std::endl;
        }
        double getLowerDate(std::string& date)
        {
            itrator itrr = dataBase.find(date);
            if (itrr != dataBase.end())
                return itrr->second;
            itrator itr = dataBase.lower_bound(date);
            if (itr != dataBase.begin())
                --itr;
            return (itr->second);
        }
        ~BitcoinExchange();
};

int parsing(int *tabdate, double value, std::string& lastDate, std::string& str, std::string& numVaule);
bool isValidDate(int year, int month, int day);
#endif