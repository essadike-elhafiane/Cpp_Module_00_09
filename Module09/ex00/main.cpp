#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <sstream>

void    loadData(std::ifstream& data, BitcoinExchange& b)
{
    std::string str;
    int i = 0;
    while (!std::getline(data, str).fail())
    {
        size_t pos = str.find(',');
        if (i != 0 && pos != str.npos)
        {
             std::string date = str.substr(0, pos);
             std::string num = str.substr(pos + 1, str.size() - pos);
             b.addNumber(std::atof(num.c_str()), date);
        }
        i = 1;
    }
}

bool isValidDate(int year, int month, int day) {
    std::tm time = {0, 0, 0, day, month - 1, year - 1900,0,0,0,0,0};
    std::mktime(&time);

    return time.tm_year == year - 1900 &&
           time.tm_mon == month - 1 &&
           time.tm_mday == day;
}

void check_first_line(std::string str)
{   
    size_t end = str.find_last_not_of(" \t");
    size_t start = str.find_first_not_of(" \t");
        if(end <= start || str.substr(start, end - start + 1) != "date | value")
            return(std::cout << "Error date | value not fond " << std::endl, exit(1));
}

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
        return(std::cerr << "Error arguments !" << std::endl, 1);
    std::ifstream input(av[1]), data("data.csv");
    if (!input.is_open())
        return(std::cerr << "Error: could not open file." << std::endl, 1);
    if (!data.is_open())
        return(std::cerr << "Error: could not open file dataBase." << std::endl, 1);
    BitcoinExchange b;
    loadData(data, b);
    std::string str;
    int i = 0;
    while (!std::getline(input, str).fail())
    {
        if (i == 0)
        {
            check_first_line(str);
            i = 1;
            continue;
        }
        size_t pos_pipe = str.find('|');
        if (pos_pipe == str.npos)
        {
            std::cout << "Error: bad input => " << str << std::endl;
            continue;
        }
        int j = 0;
        while(str[j] == ' ' || str[j] == '\t')
            j++;
        if (!std::isdigit(str[j]))
        {
            std::cout << "Error input !" << str[j] << std::endl; 
            continue;
        }
        std::string date = str.substr(0, pos_pipe);
        size_t end = date.find_last_not_of(" \t");
        size_t start = date.find_first_not_of(" \t");
        std::string lastDate = date.substr(start, end - start + 1);
        std::string numValue = str.substr(pos_pipe + 1, str.size());
        start = numValue.find_first_not_of(" \t");
        end = numValue.find_last_not_of(" \t");
        if (lastDate.size() > 10 || end == numValue.npos || start == numValue.npos)
        {
            std::cout << "Error: bad input => "<< str << std::endl;
            continue;
        }
        std::string numValue1 = numValue.substr(start, end - start + 1);
        int tabdate[3];
        tabdate[0] = atoi(lastDate.c_str());
        tabdate[1] = atoi(lastDate.c_str() + 5);
        int add = 8;
        if(*(lastDate.c_str() + 7) != '-')
            add--;
        tabdate[2] = atoi(lastDate.c_str() + add);
        double value = atof(numValue1.c_str());
        if (parsing(tabdate, value, lastDate, str, numValue1))
            continue;
        std::cout << lastDate << " => " << value << " = " << b.getLowerDate(lastDate) * value << std::endl;
    }
}