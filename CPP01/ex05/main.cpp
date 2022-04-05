#include "Karen.hpp"

int main(void)
{
	Karen myKaren;

	myKaren.complain("INFO");
	std::cout << std::endl;
	myKaren.complain("DEBUG");
	std::cout << std::endl;
	myKaren.complain("WARNING");
	std::cout << std::endl;
	myKaren.complain("ERROR");
	std::cout << std::endl;
	myKaren.complain("INFO");
	std::cout << std::endl;
	myKaren.complain("JOPA");
	return (0);
}