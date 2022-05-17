#include "Zombie.hpp"

int main ()
{
    Zombie  a;
    Zombie  *b;
    
    b = a.newZombie("abc");
    b->announce();
    delete b;

    std::cout << std::endl;

    a.randomChump("funtik");

    std::cout << std::endl;

    return (0);
}