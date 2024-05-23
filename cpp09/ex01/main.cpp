// division by 0 should not crash the program
// the operations should not live in a stack, so the program should throw 
// an error if it doesn’t have enough numbers to operate on 
// (that means that e.g. “9 8 -” will work, but “9 - 8” shouldn’t work, but it will if the evaluated perso
//  just waits for enough numbers to appear in the stack - which is wrong)

#include"RPN.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
        return 1;
    }

    try {
        std::string expression = argv[1];
        float result = RPN::postfixEval(expression);
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}