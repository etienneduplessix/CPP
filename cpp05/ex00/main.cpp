#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Bureaucrat test1("titi", 1);
    
    try {
        Bureaucrat test2(test1);
    } catch (const std::exception &exc) {
        std::cout << exc.what() << std::endl;
    }

    try {
        test1.incrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        test1.decrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << test1 << std::endl;

    return 0;
}
