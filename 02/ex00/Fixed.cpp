/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:15:38 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/11 23:03:59 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->j;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    j = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    j = other.j;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        j = other.j;
    }
    return *this;
}

void Fixed::setRawBits( int const raw )
{
    this->j = raw;
}
