
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm(P_NAME, P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: AForm(target, P_SIGN, P_EXEC) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
: AForm(obj) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj){
	return *(dynamic_cast<PresidentialPardonForm*>(&(AForm::operator=(obj))));
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const {
	checkExecute(bureaucrat);
	std::cout << "[PARDON] " << getName() << " has been pardon by Zaphod Beeblebrox\n\n";
}