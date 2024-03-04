
#include "Fixed.hpp"
#include <iostream>


int main(void) {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << "a raw bits: " << a.getRawBits() << std::endl;
    std::cout << "b raw bits: " << b.getRawBits() << std::endl;
    std::cout << "c raw bits: " << c.getRawBits() << std::endl;

    return 0;
}
