#include "Fixed.hpp" 

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& ther)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = ther.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return value;
}

void Fixed::setRawBits( int const raw )
{
    value =  raw;
}

Fixed::Fixed(const int num_int)
{
    std::cout << "Int constructor called" << std::endl;
    value = num_int << bits;
}

Fixed::Fixed(const float num_float)
{
    std::cout << "Float constructor called" << std::endl;
    value = (int)(roundf(num_float * (1 << bits)));
}

float Fixed::toFloat( void ) const
{
    return ((float)(value) / (1 << bits));
}

int Fixed::toInt( void ) const
{
    return value >> bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
