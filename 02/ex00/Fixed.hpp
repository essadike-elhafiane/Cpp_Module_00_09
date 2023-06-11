#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int j;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other); 
        Fixed& operator=(const Fixed& other);
        int getRawBits(void);
        void setRawBits( int const raw );
};


#endif