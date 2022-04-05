#include "PhoneBook.hpp"


Book::Book(){
	contactsCount = 0;
	lastAddedInd = 0;
}

void Book::add(){
	contactsCount++;
	if (contactsCount > CONTACTCOUNT)
		contactsCount = CONTACTCOUNT;
	if (lastAddedInd == CONTACTCOUNT)
		lastAddedInd = 0;
	std::string buf;
	std::cout << ">> First name:\t\t";
	getline(std::cin, buf ,'\n');
	contacts[lastAddedInd].set_firstName(buf);
	std::cout << ">> Last name:\t\t";
	getline(std::cin, buf ,'\n');
	contacts[lastAddedInd].set_lastName(buf);
	std::cout << ">> Nickname:\t\t";
	getline(std::cin, buf ,'\n');
	contacts[lastAddedInd].set_nickName(buf);
	std::cout << ">> Phone number:\t";
	getline(std::cin, buf ,'\n');
	contacts[lastAddedInd].set_number(buf);
	std::cout << ">> Secret:\t\t";
	getline(std::cin, buf ,'\n');
	contacts[lastAddedInd].set_secret(buf);
	lastAddedInd++;
}

void Book::search(){
	std::string	buf;
	int			index = 0;

	std::cout << "      index  firstName  lastName  nickName " << std::endl;
	std::cout << "---------------------------------------------" <<  std::endl;
	for (int i = 0; i < contactsCount; i++)
	{	
		std::cout << "|         " << i + 1 << "|";
		printContactField(contacts[i].get_firstName()); 
		printContactField(contacts[i].get_lastName()); 
		printContactField(contacts[i].get_nickName());
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" <<  std::endl;
	std::cout << ">> Index:\t";
	getline(std::cin, buf,'\n');
	for (int i = 0; i < (int)buf.length(); i++)
		if (!std::isdigit(buf[i]) && !index){
			index = -1;
			std::cout << "Index is not valid...\n";
		}
	if (index != -1)
	{
		index = std::strtol(buf.c_str(), NULL, 10) - 1;
		if (index < contactsCount && index > 0 && index <= CONTACTCOUNT)
		{
			std::cout << "    ind     first name  last name  nickname    number     secret" << std::endl;
        	std::cout << "-------------------------------------------------------------------" << std::endl;
            std::cout << "|         " << index + 1 << "|";
			printContactField(contacts[index].get_firstName()); 
			printContactField(contacts[index].get_lastName()); 	
			printContactField(contacts[index].get_nickName());
			printContactField(contacts[index].get_number());
			printContactField(contacts[index].get_secret()); 
			std::cout << std::endl;
			std::cout << "-------------------------------------------------------------------" <<  std::endl;
		}
		else
			std::cout << "Index is not valid...\n";
	}
}


void Book::printContactField(std::string field) {
    int len = field.length();
    if (len > 9)
        std::cout << field.substr(0, 9) << '.' << "|";
    else
    {
        std::cout.fill(' ');
        std::cout << std::setw(10) << field << "|";
    }
}
