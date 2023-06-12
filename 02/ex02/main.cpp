/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:16:00 by eelhafia          #+#    #+#             */
/*   Updated: 2023/06/12 18:27:21 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << std::endl;
    
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    
    std::cout << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( b, a ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    std::cout << std::endl;

    std::cout <<  (b + a)  << std::endl;
    std::cout <<  (a - b)  << std::endl;
    std::cout <<  (a * b)  << std::endl;
    std::cout <<  (a / b)  << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::boolalpha <<  (b > a)  << std::endl;
    std::cout << std::boolalpha <<  (b < a)  << std::endl;
    std::cout << std::boolalpha <<  (b >= a)  << std::endl;
    std::cout << std::boolalpha <<  (b <= a)  << std::endl;
    std::cout << std::boolalpha <<  (b == a)  << std::endl;
    std::cout << std::boolalpha <<  (b != a)  << std::endl;
    return 0;
}
