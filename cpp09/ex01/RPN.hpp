#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cmath>
#include <stack>
#include <climits>
#include <stdexcept>
#include <string>

class RPN
{
public:
    RPN();
    ~RPN();
    RPN(const RPN& o);
    RPN& operator=(const RPN& o);

    static float postfixEval(const std::string& postfix);

private:
    static float scanNum(char ch);
    static int isOperator(char ch);
    static int isOperand(char ch);
    static float operation(float a, float b, char op);
};

#endif // RPN_HPP
