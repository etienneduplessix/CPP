
#include "Fixed.hpp"
#include <cmath>


bool Fixed::operator>(const Fixed &fix) const
{
	return (this->getRawBits() > fix.getRawBits());
   
}

bool Fixed::operator<(const Fixed &fix) const
{
	return (this->getRawBits() < fix.getRawBits());
   
}

bool Fixed::operator>=(const Fixed &fix) const
{
	return (this->getRawBits() >= fix.getRawBits());
    
}

bool Fixed::operator<=(const Fixed &fix) const
{
	return (this->getRawBits() <= fix.getRawBits());
    
}

bool Fixed::operator!=(const Fixed &fix) const
{
	return (this->getRawBits() != fix.getRawBits());
   
}

bool Fixed::operator==(const Fixed &fix) const
{
	return (this->getRawBits() == fix.getRawBits());
     
}

Fixed Fixed::operator+(const Fixed &fix) const
{
	Fixed ret(this->toFloat() + fix.toFloat());
	return (ret);
    
}

Fixed Fixed::operator-(const Fixed &fix) const
{
	Fixed ret(this->toFloat() - fix.toFloat());
	return (ret);
    
}

Fixed Fixed::operator*(const Fixed &fix) const
{
	Fixed ret(this->toFloat() * fix.toFloat());
	return (ret);
    
}

Fixed Fixed::operator/(const Fixed &fix) const
{
	Fixed ret(this->toFloat() / fix.toFloat());
	return (ret);
    
}

Fixed& Fixed::operator++(void)
{
	this->fixed_int++;
	return(*this);
    
}

Fixed& Fixed::operator--(void)
{
	this->fixed_int--;
	return(*this);
    
}

const Fixed Fixed::operator++(int)
{
	const Fixed ret(*this);
	this->fixed_int++;
	return(ret);
   
}

const Fixed Fixed::operator--(int)
{
	const Fixed ret(*this);
	this->fixed_int--;
	return(ret);
}

Fixed& Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}

const Fixed& Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix);