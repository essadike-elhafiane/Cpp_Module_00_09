/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:15:38 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/12 18:42:53 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    valus = 0;
}

Fixed::Fixed(const int valus)
{
    this->valus = valus << bits;
}

Fixed::Fixed(const float valus)
{
    this->valus = static_cast<int>(std::roundf(valus * (1 << bits)));
}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& other)
{
    valus = other.valus;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        valus = other.valus;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(valus) / (1 << bits);
}

int Fixed::toInt( void ) const
{
    return valus >> bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

 Fixed Fixed::operator ++ () 
{
    ++this->valus;
    float r = this->toFloat();
    return Fixed(r);
}

Fixed Fixed::operator++(int)
{
    float r = this->toFloat();
    this->valus++;
    return Fixed(r);
}

Fixed Fixed::operator -- ()
{
    --this->valus;
    float r = this->toFloat();
    return Fixed(r);
}

Fixed Fixed::operator--(int) 
{
    float r = this->toFloat();
    this->valus--;
    return Fixed(r);
}

Fixed Fixed::operator + (const Fixed fixed) const
{
    float r = this->toFloat() + fixed.toFloat();
    return Fixed(r);
}

Fixed Fixed::operator * (const Fixed fixed) const
{
    float r = this->toFloat() * fixed.toFloat();
    return Fixed(r);
}

bool Fixed::operator >= (const Fixed fixed) const
{
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator > (const Fixed fixed)  const
{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator < (const Fixed fixed) const
{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator == (const Fixed fixed) const
{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator != (const Fixed fixed) const
{
    return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator <= (const Fixed fixed) const
{
    return (this->toFloat() <= fixed.toFloat());
}

Fixed Fixed::operator - (const Fixed fixed) const
{
    float r = this->toFloat() - fixed.toFloat();
    return Fixed(r);
}

Fixed Fixed::operator / (const Fixed fixed) const
{
    float r = this->toFloat() / fixed.toFloat();
    return Fixed(r);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a.toFloat() > b.toFloat()) ? a : b;
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a.toFloat() < b.toFloat()) ? a : b;
}
