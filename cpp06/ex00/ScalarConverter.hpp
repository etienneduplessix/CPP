#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <iomanip>
#include <cmath>
#include <cfloat>



class ScalarConverter {
public:
    static void convert(const std::string& toConvert);

private:
    static int type;
    static char theChar;
    static int theInt;
    static float theFloat;
    static double theDouble;

    static int checkDigit(double temp, const std::string& toConvert);
    static int parseString(const std::string& toConvert);
    static void fromChar();
    static void fromInt();
    static void fromFloat();
    static void fromDouble();
    static int checkInt(double temp, const std::string& toConvert);
    static int checkFloat(double temp, const std::string& toConvert);
    static int checkDouble(double temp, const std::string& toConvert);
    static int single(const std::string& toConvert);
    static int pseudoLiterals(const std::string& toConvert);
    static void printPseudos();

    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter &operator=(const ScalarConverter &assign);
    ~ScalarConverter();
};

#endif // SCALAR_CONVERTER_H
