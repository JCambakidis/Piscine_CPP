#include "Fixed.hpp"
#include <iostream>

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _point_fix;
}

void Fixed::setRawBits(int const raw)
{
	_point_fix = raw;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_copy;
}