#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define BUREAUCRAT "\033[1;30m"
# define SHRUBBERY "\033[1;32m"
# define ROBOT "\033[1;36m"
# define PARDON "\033[1;35m"

int main() {
	Bureaucrat tata = Bureaucrat("tata", 2);
	Bureaucrat shasha = Bureaucrat("shasha", 139);
	Bureaucrat sasa = Bureaucrat("sasa", 148);
	AForm* moon = new ShrubberyCreationForm("Moon");

	std::cout << tata << EOC;
	std::cout << shasha << EOC;
	std::cout << sasa << EOC;
	std::cout <<  *moon << EOC;
	tata.signForm(*moon);
	std::cout <<  *moon << EOC;
	tata.executeForm(*moon);
	shasha.signForm(*moon);
	std::cout <<  *moon << EOC;
	shasha.executeForm(*moon);
	sasa.signForm(*moon);
	std::cout <<  *moon << EOC;
	sasa.executeForm(*moon);
	delete moon;

	AForm* robot = new RobotomyRequestForm("transfomer");
	std::cout <<  *robot << EOC;
	tata.signForm(*robot);
	tata.executeForm(*robot);

	AForm* where42 = new PresidentialPardonForm("where42");
	std::cout <<  *where42 << EOC;
	tata.signForm(*where42);
	tata.executeForm(*where42);
	delete where42;
}