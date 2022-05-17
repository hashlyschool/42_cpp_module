#include "Zombie.hpp"

int main()
{
    Zombie  base;
    Zombie  *z;
    int     N_z;

    N_z = 4;
    z = base.zombieHorde(N_z, "blaBlaBla");
    for (int i = 0; i < N_z; ++i)
        z[i].announce();

    delete [] z;
    
    return (0);
}