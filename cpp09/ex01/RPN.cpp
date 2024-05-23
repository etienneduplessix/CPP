#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN& o) { (void)o; }
RPN& RPN::operator=(const RPN& o) { (void)o; return *this; }

float RPN::scanNum(char ch) {
    int value = ch - '0';
    return static_cast<float>(value);
}

int RPN::isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') ? 1 : -1;
}

int RPN::isOperand(char ch) {
    return (ch >= '0' && ch <= '9') ? 1 : -1;
}

float RPN::operation(float a, float b, char op) {
    switch (op) {
        case '+': return b + a;
        case '-': return b - a;
        case '*': return b * a;
        case '/': 
            if (a == 0) {
                throw std::runtime_error("Division by zero");
            }
            return b / a;
        default: throw std::runtime_error("Invalid operator");
    }
}

float RPN::postfixEval(const std::string& postfix) {
    std::stack<float> stk;
    
    for (std::string::const_iterator it = postfix.begin(); it != postfix.end(); ++it) {
        char ch = *it;
        if (ch == ' ') {
            continue; // Ignore spaces in the input string
        } else if (isOperator(ch) != -1) {
            if (stk.size() < 2) {
                throw std::runtime_error("Insufficient operands");
            }
            float a = stk.top(); stk.pop();
            float b = stk.top(); stk.pop();
            stk.push(operation(a, b, ch));
        } else if (isOperand(ch) > 0) {
            stk.push(scanNum(ch));
        } else {
            throw std::runtime_error("Invalid character in expression");
        }
    }

    if (stk.size() != 1) {
        throw std::runtime_error("The user input has too many operands");
    }

    return stk.top();
}
