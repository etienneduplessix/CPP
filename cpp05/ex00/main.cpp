#include "Bureaucrat.hpp"
#include <iostream>

// Define the operator<< function outside of the main function
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return os;
}

int main() {
    try {
        Bureaucrat test1("titi", 30);
        Bureaucrat test2(test1); // Copy constructor
        // Bureaucrat test3; // Remove this line, as you don't have a default constructor
        // test3 = test1; // This line will be an error until you implement the assignment operator
        Bureaucrat test4("kiki", 0); // Grade 0 is invalid, so an exception will be thrown here
    } catch (const std::exception &exc) {
        std::cout << exc.what() << std::endl;
    }

    try {
        Bureaucrat test1("titi", 30);
        test1.incrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test1("titi", 30);
        test1.decrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
