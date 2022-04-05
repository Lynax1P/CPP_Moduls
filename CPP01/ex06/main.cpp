#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen myKaren;

	if (argc == 2)
		myKaren.complain(argv[1]);
	else
		std::cout << "Karen should complain at least once!!!" << std::endl;
	return (0);
}
