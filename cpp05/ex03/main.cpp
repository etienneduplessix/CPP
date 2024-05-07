#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

#define R_NAME "Robotomy_Request_Form"

int main() {
    Bureaucrat sasa("sasa", 2);
    Intern intern;

    try {
        AForm* form = intern.makeForm(R_NAME, "transfomer");
        std::cout << *form << std::endl;
        sasa.signForm(*form);
        std::cout << *form << std::endl;
        delete form;
    } catch (std::exception& e) {
        std::cerr << "Intern can't make form because " << ERR << e.what() << EOC << std::endl << std::endl;
    }

    try {
        AForm* form = intern.makeForm("noform", "error");
        std::cout << *form << std::endl;
        sasa.signForm(*form);
        std::cout << *form << std::endl;
        delete form;
    } catch (std::exception& e) {
        std::cerr << "Intern can't make form because " << ERR << e.what() << EOC << std::endl << std::endl;
    }

    return 0;
}
