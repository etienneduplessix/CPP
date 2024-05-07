#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "AForm.hpp"

# define S_NAME "Shrubbery_Creation_Form"
# define S_SIGN 145
# define S_EXEC 137

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();

		void execute(const Bureaucrat& bureaucrat) const;
		static AForm* makeShrubbery(const std::string& target);
};

#endif