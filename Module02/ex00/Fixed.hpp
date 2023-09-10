#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>

class Fixed
{
    private:
        int value;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=(const Fixed& ther);
        ~Fixed();
};




#endif