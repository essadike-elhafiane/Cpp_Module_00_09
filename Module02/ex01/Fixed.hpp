#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const int num_int);
        Fixed(const float num_float);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed& ther);
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif