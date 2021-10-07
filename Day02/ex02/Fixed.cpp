#include "Fixed.hpp"

/*
*	Functions
*	_____________________________
*/

int Fixed::getRawBits(void) const
{
	return _point_fix;
}

void Fixed::setRawBits(int const raw)
{
	_point_fix = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_point_fix / (1 << _bfrac);
}

int Fixed::toInt(void) const
{
	return _point_fix / (1 << _bfrac);
}

Fixed Fixed::min(Fixed a, Fixed b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed Fixed::max(Fixed a, Fixed b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

/*
*	Overloadings
*	_____________________________
*/


//COMPARAISON
std::ostream & operator<<(std::ostream & param, const Fixed& fix)
{
	param << fix.toFloat();
	return param;
}

Fixed &Fixed::operator=(Fixed const &fixed_copy)
{
	this->_point_fix = fixed_copy.getRawBits();
	return *this;
}

int Fixed::operator==(Fixed const &fixed_copy)
{
	if (this->toFloat() == fixed_copy.toFloat())
		return 1;
	return 0;
}

int Fixed::operator<(Fixed const &fixed_copy)
{
	if (this->toFloat() < fixed_copy.toFloat())
		return 1;
	return 0;
}

int Fixed::operator<=(Fixed const &fixed_copy)
{
	if (this->toFloat() <= fixed_copy.toFloat())
		return 1;
	return 0;
}

int Fixed::operator>(Fixed const &fixed_copy)
{
	if (this->toFloat() > fixed_copy.toFloat())
		return 1;
	return 0;
}

int Fixed::operator>=(Fixed const &fixed_copy)
{
	if (this->toFloat() >= fixed_copy.toFloat())
		return 1;
	return 0;
}

int Fixed::operator!=(Fixed const &fixed_copy)
{
	if (this->toFloat() != fixed_copy.toFloat())
		return 1;
	return 0;
}

//ARITHMETIC
Fixed Fixed::operator*(Fixed const &fixed_copy)
{
	Fixed res = this->toFloat() * fixed_copy.toFloat();

	return res;
}

Fixed Fixed::operator+(Fixed const &fixed_copy)
{
	Fixed res = this->toFloat() + fixed_copy.toFloat();
	
	return res;
}

Fixed Fixed::operator-(Fixed const &fixed_copy)
{
	Fixed res = this->toFloat() - fixed_copy.toFloat();
	
	return res;
}

Fixed Fixed::operator/(Fixed const &fixed_copy)
{
	Fixed res = this->toFloat() / fixed_copy.toFloat();
	
	return res;
}

//PREFIX
Fixed &Fixed::operator++()
{
	++this->_point_fix;
	return *this;
}

Fixed &Fixed::operator--()
{
	--this->_point_fix;
	return *this;
}

//POSTFIX
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_point_fix++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_point_fix--;
	return temp;
}

/*
*	Constructors
*	_____________________________
*/

Fixed::Fixed(): _point_fix(0)
{
}

Fixed::Fixed(Fixed const &fixed_copy)
{
	*this = fixed_copy;
}

Fixed::Fixed(int const val):_point_fix(val << _bfrac)
{
}

Fixed::Fixed(float const val):_point_fix(std::roundf(val * (1 << _bfrac)))
{
}

Fixed::~Fixed()
{
}
