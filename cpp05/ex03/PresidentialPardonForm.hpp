#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

# define P_NAME "Presidential_Pardon_Form"
# define P_SIGN 25
# define P_EXEC 5

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();

		void execute(const Bureaucrat& bureaucrat) const;
		static AForm* makePardon(const std::string& target);
};

#endif