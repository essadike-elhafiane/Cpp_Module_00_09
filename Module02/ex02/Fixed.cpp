#include "Fixed.hpp" 

Fixed::Fixed()
{ 
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& other)
{
    value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& ther)
{
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
    value = num_int << bits;
}

Fixed::Fixed(const float num_float)
{
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

/* comarision operators*/

bool Fixed::operator >= (const Fixed& ther) const
{
    if (this->toFloat() >= ther.toFloat())
        return true;
    return false;
}

bool Fixed::operator <= (const Fixed& ther) const
{
    if (this->toFloat() <= ther.toFloat())
        return true;
    return false;

}

bool Fixed::operator > (const Fixed& ther) const
{
    if (this->toFloat() > ther.toFloat())
        return true;
    return false;
}

bool Fixed::operator < (const Fixed& ther) const
{
    if (this->toFloat() < ther.toFloat())
        return true;
    return false;
}

bool Fixed::operator == (const Fixed& ther) const
{
    if (this->toFloat() == ther.toFloat())
        return true;
    return false;
}

bool Fixed::operator != (const Fixed& ther) const
{
    if (this->toFloat() != ther.toFloat())
        return true;
    return false;
}

/* arithmetic operators*/


Fixed Fixed::operator*(const Fixed& ther) const
{
    return (Fixed(this->toFloat() * ther.toFloat()));
}

Fixed Fixed::operator+(const Fixed& ther) const
{
    return (Fixed(this->toFloat() + ther.toFloat()));
}

Fixed Fixed::operator/(const Fixed& ther) const
{
    return (Fixed(this->toFloat() / ther.toFloat()));
}

Fixed  Fixed::operator-(const Fixed& ther) const
{
    return (Fixed(this->toFloat() - ther.toFloat()));
}

/*increment/decrement*/

Fixed Fixed::operator++ ()
{
    ++this->value;
    return (Fixed(this->toFloat()));
}

Fixed Fixed::operator++ (int)
{
    float rsult = this->toFloat();
    this->value++;
    return (Fixed(rsult));
}

Fixed Fixed::operator-- ()
{
    --this->value;
    return (Fixed(this->toFloat()));
}

Fixed Fixed::operator-- (int)
{
    float rsult = this->toFloat();
    this->value--;
    return (Fixed(rsult));
}

/* min && max functions */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.toFloat() > b.toFloat())
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
     if (a.toFloat() > b.toFloat())
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.toFloat() < b.toFloat())
        return (b);
    return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.toFloat() < b.toFloat())
        return (b);
    return (a);
}
