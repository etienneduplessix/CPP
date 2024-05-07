
#include "ScalarConverter.hpp"


int main() {
    std::string input;

    // Prompt user for input
    std::cout << "Enter a string representation of a C++ literal: ";
    std::cin >> input;

    // Call the convert method of ScalarConverter
    ScalarConverter::convert(input);

    return 0;
}
