#include "Fixed.hpp"

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

std::ostream & operator<<(std::ostream & param, const Fixed& fix)
{
	param << fix.toFloat();
	return param;
}

Fixed &Fixed::operator=(Fixed const &fixed_copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point_fix = fixed_copy.getRawBits();
	return *this;
}

Fixed::Fixed(): _point_fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_copy;
}

Fixed::Fixed(int const val):_point_fix(val << _bfrac)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val):_point_fix(std::roundf(val * (1 << _bfrac)))
{
	std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
