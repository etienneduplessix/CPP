#ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& obj);
		Intern& operator=(const Intern &obj);
		~Intern();

		AForm* makeForm(const std::string& form, const std::string& target);

		class NoFormException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif