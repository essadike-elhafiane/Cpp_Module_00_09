/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:15:38 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/12 02:02:03 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    valus = 0;
};

Fixed::Fixed(const int valus)
{
    std::cout << "Int constructor called" << std::endl;
    this->valus = valus << bits;
}

Fixed::Fixed(const float valus)
{
    std::cout << "Float constructor called" << std::endl;
    this->valus = static_cast<int>(std::roundf(valus * (1 << bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    valus = other.valus;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        valus = other.valus;
    }
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
