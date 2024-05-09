#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <stdlib.h> 

int main() {
    std::srand(std::time(NULL));
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}