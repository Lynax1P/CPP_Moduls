#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstring>

template <typename T>
class Array
{
private:
    T*      _head;
    size_t  _size;
public:
    Array();
    Array(unsigned int  n);
    Array(const Array & refA);
    ~Array();

    size_t  size() const;
    Array&   operator=(const Array &refA);
    T&   operator[](const size_t index) const throw(std::exception);
};

template <typename T>
Array<T>::Array(): _head(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _head(new T[n]), _size(n){}


template <typename T>
Array<T>::Array(const Array<T> &refA){
    *this = refA;
}

template <typename T>
Array<T>::~Array(){
    delete[] this->_head;
}

/*
* Method
*/

template <typename T>
size_t  Array<T>::size() const{
    return this->_size;
}

template <typename T>
Array<T>   &Array<T>::operator=(const Array<T> &refA){
    if (this == &refA)
        return *this;
    delete [] this->_head;
    this->_size = refA.size;
    this->_head = new T[this->_size]; 
    for (size_t i = 0; i < this->_size; i++){
        this->_head[i] = refA._head[i];
    }
    return *this;
}

template <typename T>
T   &Array<T>::operator[](const size_t n) const throw(std::exception){
    if (n < 0 && n >= this->_size)
        throw (std::out_of_range("Index out of range"));
    return this->_head[n];
}

#endif