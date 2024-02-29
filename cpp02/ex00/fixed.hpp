#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class fixed
{
    private:
     int value ; 
     static const int  bits;

	public:
		// Constructors
		fixed() = 0 ;
		fixed(const fixed &copy);
		~fixed();
		fixed & operator=(const fixed &assign);
 	    int getRawBits(void) const;
	    void setRawBits(int const raw);
		

		
};

#endif


• Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;