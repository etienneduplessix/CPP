#include "Base.hpp"
#include <iostream>
#include <stdlib.h> 

Base::~Base() {}

Base *generate() {
    int i = std::rand() % 3;
    switch (i) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL; 
}

void	identify(Base* p)
{
	std::cout << "*" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	A a;
	B b;
	C c;

	std::cout << "&" << std::endl;
	try {
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception & e) {
	try {
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::exception & e) {
	try {
		c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception & e){

	}}}
}