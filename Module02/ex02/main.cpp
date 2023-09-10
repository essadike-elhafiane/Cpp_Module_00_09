#include "Fixed.hpp"

int main()
{
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