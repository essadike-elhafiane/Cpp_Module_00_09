#include <iostream>

class Fixed {
public:
    Fixed() : value_(0) {}
    Fixed(const Fixed& other) : value_(other.value_) {}
    Fixed(const int value) : value_(value << fractional_bits_) {}
    Fixed(const float value) : value_(static_cast<int>(value * (1 << fractional_bits_))) {}
    ~Fixed() {}

    Fixed& operator=(const Fixed& other) {
        if (this != &other) {
            value_ = other.value_;
        }
        return *this;
    }

    int toInt() const {
        return value_ >> fractional_bits_;
    }

    float toFloat() const {
        return static_cast<float>(value_) / (1 << fractional_bits_);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
        os << fixed.toFloat();
        return os;
    }

private:
    int value_;
    static const int fractional_bits_ = 8;
};

const int Fixed::fractional_bits_;

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
