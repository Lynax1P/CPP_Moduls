#ifndef _CONTACT_HPP
# define _CONTACT_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Contact {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string number;
	std::string secret;
public:
	Contact();
	std::string	get_firstName();
	std::string	get_lastName();
	std::string	get_nickName();
	std::string	get_number();
	std::string	get_secret();
	void	set_firstName(std::string name);
	void	set_lastName(std::string name);
	void	set_nickName(std::string name);
	void	set_number(std::string name);
	void	set_secret(std::string name);
};

#endif