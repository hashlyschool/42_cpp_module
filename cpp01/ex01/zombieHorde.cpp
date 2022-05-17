#include "Zombie.hpp"

Zombie  *Zombie::zombieHorde( int N, std::string name )
{
    Zombie *zombie;
    
    if (N < 1)
    {
        std::cout << "error create horde zombie. N <= 0" << std::endl;
        return (NULL);
    }
    zombie = new Zombie [N];

    for (int i = 0; i < N; ++i)
        zombie[i].Name = name;

    return (zombie);
}