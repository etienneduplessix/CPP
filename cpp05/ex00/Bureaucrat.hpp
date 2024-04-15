#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
private:
    std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade is too high";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade is too low";
        }
    };

    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);

    void incrementGrade();
    void decrementGrade();

    const std::string& getName() const;
    int getGrade() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
#endif