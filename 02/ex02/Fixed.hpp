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

        Fixed operator ++ ();
        Fixed operator++(int);
        Fixed operator -- ();
        Fixed operator--(int);

        Fixed operator + (const Fixed fixed) const;
        Fixed operator * (const Fixed fixed) const;
        Fixed operator - (const Fixed fixed) const;
        Fixed operator / (const Fixed fixed) const;

        bool operator >= (const Fixed fixed) const;
        bool operator > (const Fixed fixed) const;
        bool operator < (const Fixed fixed) const;
        bool operator == (const Fixed fixed) const;
        bool operator != (const Fixed fixed) const;
        bool operator <= (const Fixed fixed) const;


        static Fixed max(const Fixed& a, const Fixed& b);
        static Fixed min(const Fixed& a, const Fixed& b);

        float toFloat( void ) const;
        int toInt( void ) const;

        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif