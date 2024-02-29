#include "Harl.hpp"


typedef void (Harl::*FunctionPointer)();

void Harl::debug() {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-specialketchup burger. "
              << "I really do!\n";
}

void Harl::info() {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! "
              << "If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning() {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working "
              << "here since last month.\n";
}

void Harl::error() {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
    std::map<std::string, FunctionPointer> funcMap;

    funcMap["DEBUG"] = &Harl::debug;
    funcMap["INFO"] = &Harl::info;
    funcMap["WARNING"] = &Harl::warning;
    funcMap["ERROR"] = &Harl::error;

    std::map<std::string, FunctionPointer>::iterator it = funcMap.find(level);
    if (it != funcMap.end()) {
        (this->*(it->second))();
    } else {
        std::cout << "[ INVALID ]\nHarl didn't understand the message\n";
    }
}

