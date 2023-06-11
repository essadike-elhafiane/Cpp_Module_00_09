#include <iostream>

class FixedPoint {
public:
    FixedPoint() {
        std::cout << "Default constructor called" << std::endl;
        value_ = 0;
    }

    FixedPoint(const FixedPoint& other) {
        std::cout << "Copy constructor called" << std::endl;
        value_ = other.value_;
    }

    FixedPoint& operator=(const FixedPoint& other) {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other) {
            value_ = other.value_;
        }
        return *this;
    }

    ~FixedPoint() {
        std::cout << "Destructor called" << std::endl;
    }

    int getRawBits() const {
        std::cout << "getRawBits member function called" << std::endl;
        return value_;
    }

private:
    int value_;
};

int main() {
    FixedPoint a; // default constructor
    FixedPoint b(a); // copy constructor
    FixedPoint c;
    c = b; // copy assignment operator

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
