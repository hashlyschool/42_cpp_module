#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	void			debug( void );
	void			info( void );
	void			warning( void );
	void			error( void );

	char			level;

	typedef void (Harl::* funcPtr)(void);
	funcPtr			funcArr[4];
	std::string		levelsArr[4];
public:
	Harl();
	~Harl();

	void	complain(std::string level);
	void	setLevel(std::string level);
};

#endif
