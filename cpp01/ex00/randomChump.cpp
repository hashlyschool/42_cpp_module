#include "Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie zombie;

    zombie.Name = name;
    zombie.announce();
    return ;
}