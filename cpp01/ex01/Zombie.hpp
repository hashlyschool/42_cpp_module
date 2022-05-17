#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
private:
    std::string Name;
public:
    Zombie();
    ~Zombie();

    void announce( void );

    Zombie* zombieHorde( int N, std::string name );
};

#endif