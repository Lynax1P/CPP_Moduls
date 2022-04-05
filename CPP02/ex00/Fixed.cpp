#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "[ DEF Constructor called. ]\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "[ Copy constrictor called]\n";
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "[ DEF Destructor called. ]\n";
}

Fixed	&Fixed::operator=(const Fixed &anotherFixed)
{
	std::cout << "[ Assignation operator '=' called. ]\n";
	this->_value = anotherFixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "[ Func getRawBits called. ]\n";
	return _value;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "[ Func setRawBits called. ]\n";
	_value = raw;
}
