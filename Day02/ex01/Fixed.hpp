#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_point_fix;
		static const int _bfrac = 8;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed & operator=(Fixed const &fixed_copy);
		Fixed();
		Fixed(Fixed const &fixed_copy);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed();
};

std::ostream & operator<<(std::ostream & param, const Fixed& fix);

#endif