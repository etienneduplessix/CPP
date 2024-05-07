#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm(S_NAME, S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: AForm(target, S_SIGN, S_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
: AForm(obj) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj){
	return *(dynamic_cast<ShrubberyCreationForm*>(&(AForm::operator=(obj))));
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const {
	checkExecute(bureaucrat);
	std::ofstream out(getName() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (!out.good())
		throw FileErrorException();
std::string shrubbery = 
    "       ___       \n"
    "     /`   `\\     \n"
    "   /`       `\\   \n"
    " /`___________`\\ \n"
    "/_______________\\ \n"
    "\\_______________/ \n"
    " `\\___________/`  \n"
    "   `\\_______/`    \n"
    "     `\\___/`      \n"
    "       `|`        \n"
    "        |         \n"
    "        |         \n"
    "        |         \n"
    "        |         \n"
    "      /   \\       \n"
    "     /     \\      \n"
    "    /       \\     \n"
    "                   \n";
	out << shrubbery;
	out.close();
	std::cout << "[Shrubbery] tree making success\n\n";
}

AForm* ShrubberyCreationForm::makeShrubbery(const std::string& target) {
	return new ShrubberyCreationForm(target);
}