#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ctgmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const float value);
	Fixed(const int value);
	~Fixed();

	Fixed			&operator=(const Fixed &anotherFixed);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	int				toInt() const;
	float			toFloat() const;
};
std::ostream	&operator<<(std::ostream &out, const Fixed &anotherFixed);

#endif
