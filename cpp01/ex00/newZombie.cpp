#include "Zombie.hpp"

Zombie  *Zombie::newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie; 
    zombie->Name = name;
    return (zombie);
}
