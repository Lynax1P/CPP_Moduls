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

//Operations

Fixed	&Fixed::operator=(const Fixed &anotherFixed) {
	std::cout << "[ Assignation operator '=' called. ]\n";
	this->_value = anotherFixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &anotherFixed) {
    out << anotherFixed.toFloat();
    return (out);
}

Fixed	Fixed::operator+(const Fixed &anotherFixed)
{
	Fixed	sum(*this);
	
	sum.setRawBits(this->getRawBits() + anotherFixed.getRawBits());
	return sum;
}

Fixed	Fixed::operator-(const Fixed &anotherFixed)
{
	Fixed	difference(*this);

	difference.setRawBits(this->getRawBits() - anotherFixed.getRawBits());
	return difference;
}

Fixed	Fixed::operator*(const Fixed &anotherFixed)
{
	Fixed	multip(*this);

	multip.setRawBits(multip.getRawBits() * anotherFixed.getRawBits());
	return multip;
}

Fixed	Fixed::operator/(const Fixed &anotherFixed)
{
	Fixed   quot(*this);
	
	try {
		if (quot.getRawBits() == 0)
			throw ("can not divide by zero!\n");
		quot.setRawBits(quot.getRawBits() * (1 << _bits) / anotherFixed.getRawBits());
	}
	catch(const char *excep){
		std::cout << "Error :" << excep;
	}
	return (quot);
}

bool	Fixed::operator<(const Fixed &anotherFixed) const {
	return (this->getRawBits() < anotherFixed.getRawBits());
}

bool	Fixed::operator>(const Fixed &anotherFixed) const {
	return (this->getRawBits() > anotherFixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &anotherFixed) const {
	return (this->getRawBits() == anotherFixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &anotherFixed) const {
	return (this->getRawBits() != anotherFixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &anotherFixed) const {
	return (this->getRawBits() <= anotherFixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &anotherFixed) const {
	return (this->getRawBits() >= anotherFixed.getRawBits());
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->_value++;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->_value--;
	return temp;
}

Fixed	&Fixed::max(Fixed &value1, Fixed &value2){
	return (value1 >= value2) ? value1 : value2;
}

Fixed	&Fixed::min(Fixed &value1, Fixed &value2){
	return (value1 < value2) ? value1 : value2;
}

Fixed	const &Fixed::max(const Fixed &value1, const Fixed &value2){
	return (value1 >= value2) ? value1 : value2;
}

Fixed	const &Fixed::min(const Fixed &value1, const Fixed &value2){
	return (value1 < value2) ? value1 : value2;
}
