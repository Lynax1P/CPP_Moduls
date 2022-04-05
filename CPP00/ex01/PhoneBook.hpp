#ifndef _PHONEBOOK_HPP
# define _PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

#define 	CONTACTCOUNT 8

class Book{
	Contact contacts[CONTACTCOUNT];
	int lastAddedInd;
	int contactsCount;
public:
	Book();
	void add();
	void search();
	void printContactField(std::string field);
};
#endif