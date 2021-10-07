#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	private:
		int	_point_fix;
		static const int _bfrac = 8;

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed & operator=(Fixed const &fixed_copy);
		Fixed();
		Fixed(Fixed const &fixed_copy);
		~Fixed();
};

#endif