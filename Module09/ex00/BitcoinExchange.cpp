#include "BitcoinExchange.hpp"



BitcoinExchange::BitcoinExchange(/* args */)
{
    // dataInput.lower_bound
}

BitcoinExchange::~BitcoinExchange()
{
}


int parsing(int *tabdate, double value, std::string& lastDate, std::string& str, std::string& numVaule)
{
    if (1000 < value || INT_MIN > value)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 1;
    }
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 1;
    }
    if (tabdate[0] < 2009 || tabdate[0] > 2023)
    {
        std::cout << "Error "<< lastDate << std::endl;
        return 1;
    }
    if (!isValidDate(tabdate[0] ,tabdate[1], tabdate[2]))
    {
        std::cout << "Error date not found => " << lastDate << std::endl;
        return 1;
    }
    int pipe = 0;
    int point = 0;
    for (size_t i = 5; i < str.size(); i++)
    {
        if (str[i] == '|')
            pipe++;
        if (str[i] == '.')
            point++;
        if (str[i] != '-' && str[i] != '|' && (str[i] < '0'
            || str[i] > '9') && str[i] != ' ' && str[i] != '\t' && str[i] != '.')
        {
            std::cout << "Error input => " << str << std::endl;
            return 1;
        }
    }
    if (pipe != 1 || point > 1 || lastDate[lastDate.size() -1] == '-')
    {
        std::cout << "Error input => " << str << std::endl;
        return 1;
    }
    for (size_t i = 0; i < numVaule.size(); i++)
    {
        if (i > 0 && (numVaule[i] == '-' || numVaule[i] == ' ' || numVaule[i] == '\t'))
        {
            std::cout << "Error input value => " << numVaule << std::endl;
            return 1;
        }
    }
    for (size_t i = 0; i < lastDate.size(); i++)
    {
        if (lastDate[i] != '-' && (lastDate[i] < '0'|| lastDate[i] > '9'))
        {
            std::cout << "Error input => " << lastDate << std::endl;
            return 1;
        }
    }
    
    return 0;
}