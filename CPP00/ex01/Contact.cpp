#include "Contact.hpp"

Contact::Contact(){

}

std::string	Contact::get_firstName(){
	return firstName;
}

std::string	Contact::get_lastName(){
	return lastName;
}

std::string	Contact::get_nickName(){
	return nickName;
}

std::string	Contact::get_number(){
	return number;
}

std::string	Contact::get_secret(){
	return secret;
}

void	Contact::set_firstName(std::string name){
	firstName = name;
}

void	Contact::set_lastName(std::string name){
	lastName = name;
}

void	Contact::set_nickName(std::string name){
	nickName = name;
}

void	Contact::set_number(std::string name){
	number = name;
}

void	Contact::set_secret(std::string name){
	secret = name;
}