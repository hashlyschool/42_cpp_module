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

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    void announce( void );
};

#endif