#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << ": ERROR :\n";
		return (0);
	}
	while (argv++ && argc-- != 1)
		while(**argv != 0)
			if (std::islower(**argv))
				std::cout << (char)std::toupper(*((*argv)++));
			else
				std::cout << *((*argv)++);
	return (0);
}
