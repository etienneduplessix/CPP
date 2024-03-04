#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	private:
		int value ; 
     		static const int  bits;
	public:
		Fixed() ;
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed & operator=(const Fixed &assign);
 	    int getRawBits(void) const;
	    void setRawBits(int const raw);

};
#endif
