#include "AForm.hpp"

AForm::AForm()
: _name("default"), _flag(false), _sign(100), _execute(100) {}

AForm::AForm(const std::string name, const int sign, const int execute)
: _name(name), _flag(false), _sign(sign), _execute(execute)
{
	if (_sign < HIGH || _execute < HIGH)
		throw GradeTooHighException();
	if (_sign > LOW || _execute > LOW)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& obj)
: _name(obj.getName()),  _flag(obj.getFlag()), _sign(obj.getSign()), _execute(obj.getExecute())
{
	if (_sign < HIGH || _execute < HIGH)
		throw GradeTooHighException();
	if (_sign > LOW || _execute > LOW)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& obj) {
	if (this != &obj)
	{
		*(const_cast<std::string*>(&_name)) = obj.getName();
		_flag = obj.getFlag();
		*(const_cast<int*>(&_sign)) = obj.getSign();
		*(const_cast<int*>(&_execute)) = obj.getExecute();
		if (_sign < HIGH || _execute < HIGH)
			throw GradeTooHighException();
		if (_sign > LOW || _execute > LOW)
			throw GradeTooLowException();
	}
	return (*this);
}

AForm::~AForm() {}

void AForm::beSigned(const Bureaucrat& bureaucrat){
	if (_sign < bureaucrat.getGrade()) {
		_flag = false;
		throw GradeTooLowException();
	}
	_flag = true;
}

void AForm::checkExecute(const Bureaucrat& bureaucrat) const {
	if (!_flag)
		throw RequiredSignException();
	if (_execute < bureaucrat.getGrade())
		throw GradeTooLowException();
}

const std::string& AForm::getName() const {
	return _name;
}

bool AForm::getFlag() const {
	return _flag;
}

const int& AForm::getSign() const {
	return _sign;
}

const int& AForm::getExecute() const {
	return _execute;
}

std::ostream& operator<<(std::ostream& o, const AForm& obj) {
	return o << "[Form] Name : " << obj.getName() << ", Flag : " << std::boolalpha << obj.getFlag()
		<< ", Sign_Grade : " << obj.getSign() << ", Execute_Grade : " << obj.getExecute() << "\n\n";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade too low";
}

const char* AForm::RequiredSignException::what() const throw() {
	return "this form doesn't signed";
}

const char* AForm::FileErrorException::what() const throw() {
	return "a file error has occurred";
}