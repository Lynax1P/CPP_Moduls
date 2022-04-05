
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	line;
	Book book;

	while (getline(std::cin, line, '\n'))
	{
		if (!line.compare("SEARCH"))
			book.search();
		else if (!line.compare("ADD"))
			book.add();
		else if (!line.compare("EXIT"))
		{
			std::cout << "deleting data... exit\n"; 
			return (0);
		}
		else
			std::cout << "I don't know,this command is not list\n";
	}
	return (0);
}