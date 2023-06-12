#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int    valus;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int valus);
        Fixed(const float valus);
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        float toFloat( void ) const;
        int toInt( void ) const;
       friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif