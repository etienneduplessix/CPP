#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <ctime>
#include "AForm.hpp"
#include <cstdlib>

# define R_NAME "Robotomy_Request_Form"
# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();

		void execute(const Bureaucrat& bureaucrat) const;
		static AForm* makeRobot(const std::string& target);
};

#endif