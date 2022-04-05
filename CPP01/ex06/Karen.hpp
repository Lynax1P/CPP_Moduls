#ifndef	KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	Karen();
	~Karen();
	typedef void (Karen::*Complains)(void);
	void	complain(const std::string level);
};

#endif
