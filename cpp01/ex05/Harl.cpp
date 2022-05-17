#include "Harl.hpp"

Harl::Harl()
{
	levelsArr[0] = "DEBUG";
	levelsArr[1] = "INFO";
	levelsArr[2] = "WARNING";
	levelsArr[3] = "ERROR";
	funcArr[0] = &Harl::debug;
	funcArr[1] = &Harl::info;
	funcArr[2] = &Harl::warning;
	funcArr[3] = &Harl::error;
}

Harl::~Harl()
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	res;

	for (int i = 0; i < 4; ++i)
	{
		res = level.compare(levelsArr[i]);
		if (res == 0)
		{
			(this->*funcArr[i])();
			return ;
		}
	}
}
