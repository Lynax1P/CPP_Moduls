#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "lost arg!\n";
		return (-1);
	}
	Scalar argument(argv[1]);
	argument.convert();
}