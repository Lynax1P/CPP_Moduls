#include "ScalarConversion.hpp"
#include "stdlib.h"
#include "string.h"

Scalar::Scalar(){}

Scalar::Scalar(std::string literal): _literal(literal){}

Scalar::~Scalar(){}

void    Scalar::convert() const{
	std::string		headers[] = {"char",
								 "int",
								 "float",
								 "double"};
	
	void	(Scalar::*typeConverters[])(void) const = { &Scalar::_convertChar,
														&Scalar::_convertInt,
														&Scalar::_convertFloat,
														&Scalar::_convertDouble};
	for(int ix = 0; ix < 4; ix++){
		try {
			std::cout << headers[ix] + " : ";
			(this->*typeConverters[ix])();
		}
		catch (char const* e){
			std::cout << e;
		}
	}
}

void	Scalar::_convertChar() const{
	char ch;

	if (this->_literal.length() == 1 && this->containsChars())
		ch = this->_literal[0];
	else if (!(this->containsChars()) && atoi(this->_literal.c_str()) >= 0 && \
						atoi(this->_literal.c_str()) <= 127)
		ch = static_cast<char>(atoi(this->_literal.c_str()));
	else
		throw("error : char\n");
	if (!isprint(ch))
		throw("Non character read\n");
	std::cout << "\'" << ch << "\'\n";
}

void	Scalar::_convertInt() const{
	if (this->_literal.length() == 1 && this->containsChars()){
		if(!isprint(this->_literal[0]))
			throw("Non character read\n");
		std::cout << static_cast<int>(this->_literal[0]) << "\n";
		return ;
	} else if (!(this->containsChars())) {
		std::cout << static_cast<int>(atoi(this->_literal.c_str())) << "\n";
		return ;
	}
	throw ("error : int\n");
}

void	Scalar::_convertFloat() const{
	float	temp;
	if (this->_literal.length() == 1 && this->containsChars()){
		if (!isprint(_literal[0]));
			throw("Non character read\n");
		temp = static_cast<float>(this->_literal[0]);
	} else if (this->_literal.length() > 0 && (!this->pseudoLiteral() || !this->containsChars()))
		temp = static_cast<float>(atof(this->_literal.c_str()));
	else 
		throw ("error : float\n");
	std::cout << temp;
	if (temp - static_cast<int>(temp) == 0.)
		std::cout << ".0";
	std::cout << "f\n";
}

void	Scalar::_convertDouble() const{
	double	temp;

	if (this->_literal.length() == 1 && this->containsChars()){
		if (!isprint(_literal[0]));
			throw("Non character read\n");
		temp = static_cast<double>(this->_literal[0]);
	} else if (this->_literal.length() > 0 && (!this->pseudoLiteral() || !this->containsChars()))
		temp = static_cast<double>(atof(this->_literal.c_str()));
	else 
		throw ("error : double\n");
	std::cout << temp;
	if (temp - static_cast<int>(temp) == 0.)
		std::cout << ".0";
	std::cout << "\n";
}

int Scalar::containsChars() const{
	int k = static_cast<int>(_literal.length());

	for(int i = 0; i < k; i++){
		if (!std::isdigit(this->_literal[i]) && this->_literal[i] != '.' &&
		this->_literal[i] != 'f')
			return (1);
	}
	return (0);
}

int Scalar::pseudoLiteral() const{
	return ( strcmp("nan", this->_literal.c_str()) \
			&& strcmp("+inf", this->_literal.c_str())
			&& strcmp("-inf", this->_literal.c_str())
			&& strcmp("nanf", this->_literal.c_str())
			&& strcmp("+inff", this->_literal.c_str())
			&& strcmp("-inff", this->_literal.c_str()));
}

Scalar		&Scalar::operator=(const Scalar &refS){
	if (this == &refS)
		return *this;
	this->_literal = refS._literal;
	return *this;
}