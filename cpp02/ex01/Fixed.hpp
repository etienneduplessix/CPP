#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int fixed_int;
			static const int fraction_bit = 8;
	public:
			Fixed();
			Fixed(const int num);
			Fixed(const float num);
			Fixed(const Fixed &fix);
			Fixed &operator=(const Fixed &fix);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
			~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif // FIXED_HPP
