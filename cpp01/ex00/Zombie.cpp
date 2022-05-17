#include "Zombie.hpp"

Zombie::Zombie(): Name("NoName") {}

void    Zombie::announce(void)
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Name << " is really dead" << std::endl;
}