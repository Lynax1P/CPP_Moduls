#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
// # include <cstring>
class Scalar
{
private:
    std::string _literal;
    void        _convertChar(void) const;
    void        _convertInt(void) const;
    void        _convertFloat(void) const;
    void        _convertDouble(void) const;
    Scalar();
public:
    Scalar(std::string literal);
    Scalar(const Scalar & refS);
    ~Scalar();

    void    convert(void) const;
    int     containsChars() const;
    int     pseudoLiteral() const;
    Scalar& operator=(const Scalar& refS);
};

#endif