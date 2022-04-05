#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
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

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	int				toInt() const;
	float			toFloat() const;

	/*
	 * Operations
	 */
	Fixed			&operator=(const Fixed &anotherFixed);
	Fixed			operator+(const Fixed &anotherFixed);
	Fixed			operator-(const Fixed &anotherFixed);
	Fixed			operator*(const Fixed &anotherFixed);
	Fixed			operator/(const Fixed &anotherFixed);
	/*
	 * Comparison
	 */
	bool			operator<(const Fixed &anotherFixed) const;
	bool			operator>(const Fixed &anotherFixed) const;
	bool			operator==(const Fixed &anotherFixed) const;
	bool			operator!=(const Fixed &anotherFixed) const;
	bool			operator<=(const Fixed &anotherFixed) const;
	bool			operator>=(const Fixed &anotherFixed) const;
	/*
	* Increment / decrement operators
	*/
	Fixed			&operator++();
	Fixed			&operator--();
	Fixed			operator++(int);
	Fixed			operator--(int);
	/*
	* 	Min/Max
	*/
	static Fixed			&max(Fixed &value1, Fixed &value2);
	static Fixed			&min(Fixed &value1, Fixed &value2);
	static Fixed	const	&max(const Fixed &value1, const Fixed &value2);
	static Fixed	const	&min(const Fixed &value1, const Fixed &value2);

};
std::ostream	&operator<<(std::ostream &out, const Fixed &anotherFixed);

#endif
