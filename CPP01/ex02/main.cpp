#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "this is string variable :\t\t\t" << str << std::endl;
	std::cout << "this is address memory to string :\t\t" << &str << std::endl;

	std::cout << "this is point string :\t\t\t\t" << strPTR << std::endl;
	std::cout << "this is also string from pointer :\t\t" << *strPTR << std::endl;

	std::cout << "this is reference to string :\t\t\t" << strREF << std::endl;
	std::cout << "reference has the same address as string :\t" << &strREF << std::endl;
	return (0);
}