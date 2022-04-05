#include "Fixed.hpp"

Fixed::Fixed(): _value(0){ std::cout << "[ DEF Constructor called. ]\n"; }

Fixed::Fixed(const int value){
	std::cout << "[ INT Constructor called. ]\n";
	_value = value << _bits;
}

Fixed::Fixed(const float value){
	std::cout << "[ FLOAT Constructor called. ]\n";
	_value = roundf(value * float(1 << _bits));
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "[ Copy constrictor called]\n";
	*this = copy;
}

Fixed::~Fixed(){ std::cout << "[ DEF Destructor called. ]\n"; }

int		Fixed::getRawBits() const{
	std::cout << "[ Func getRawBits called. ]\n";
	return _value;
}

void	Fixed::setRawBits(const int raw){
	std::cout << "[ Func setRawBits called. ]\n";
	_value = raw;
}

int		Fixed::toInt() const { return _value >> _bits; }

float	Fixed::toFloat() const { return (_value / float(1 << _bits)); }

Fixed	&Fixed::operator=(const Fixed &anotherFixed) {
	std::cout << "[ Assignation operator '=' called. ]\n";
	this->_value = anotherFixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &anotherFixed) {
    out << anotherFixed.toFloat();
    return (out);
}
