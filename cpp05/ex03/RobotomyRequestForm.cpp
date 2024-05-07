#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm(R_NAME, R_SIGN, R_EXEC) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: AForm(target, R_SIGN, R_EXEC) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
: AForm(obj) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj){
	return *(dynamic_cast<RobotomyRequestForm*>(&(AForm::operator=(obj))));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const {
	checkExecute(bureaucrat);
	srand(time(NULL));
	std::cout << "[Robot] drrrr.. => ";
	if (rand() % 2 == 0)
		std::cout << getName() << " has been robotomized successfully\n\n";
	else
		std::cout << getName() << " has been failed robotomized\n\n";
}

AForm* RobotomyRequestForm::makeRobot(const std::string& target) {
	return new RobotomyRequestForm(target);
}