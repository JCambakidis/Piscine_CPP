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

		/*
		*	Basical Functions
		*	_____________________________
		*/

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		/*
		*	Static Functions
		*	_____________________________
		*/

		static Fixed min(Fixed a, Fixed b);
		static Fixed max(Fixed a, Fixed b);

		/*
		*	Overloading
		*	_____________________________
		*/
	
		//COMPARAISON
		Fixed & operator=(Fixed const &fixed_copy);
		int operator==(Fixed const &fixed_copy);
		int operator<(Fixed const &fixed_copy);
		int operator<=(Fixed const &fixed_copy);
		int operator>(Fixed const &fixed_copy);
		int operator>=(Fixed const &fixed_copy);
		int operator!=(Fixed const &fixed_copy);

		//ARITHMETIC
		Fixed operator*(Fixed const &fixed_copy);
		Fixed operator+(Fixed const &fixed_copy);
		Fixed operator-(Fixed const &fixed_copy);
		Fixed operator/(Fixed const &fixed_copy);

		//PREFIX
		Fixed& operator++();
		Fixed& operator--();

		//POSTFIX
		Fixed operator++(int);
		Fixed operator--(int);

		/*
		*	Constructor
		*	_____________________________
		*/

		Fixed();
		Fixed(Fixed const &fixed_copy);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed();
};

std::ostream & operator<<(std::ostream & param, const Fixed& fix);

#endif