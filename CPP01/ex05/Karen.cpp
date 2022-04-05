#include "Karen.hpp"

Karen::Karen(){}
Karen::~Karen(){}

void Karen::_debug(void)
{
	std::cout << "I love to get extra bacon" << std::endl <<
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." <<
	"You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. " <<
	"I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::_error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(const std::string level)
{
	std::string			levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen::Complains	complains[] = {&Karen::_debug, &Karen::_info,\
							 &Karen::_warning, &Karen::_error};
	int index = 0;

	for(; index < 4 && levels[index] != level; index++){}
	switch (index)
	{
		case 0:
			(this->*complains[0])(); break;
		case 1:
			(this->*complains[1])(); break;
		case 2:
			(this->*complains[2])(); break;
		case 3:
			(this->*complains[3])(); break;
		default:
			std::cout << level << " : " << "Such compline does not exist!!" << std::endl; break;
	}
}
