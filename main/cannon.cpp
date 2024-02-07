
#include "cannon.hpp"

void Cannon::fire()
{
    coil.on();
}

bool Cannon::is_ready()
{
    return true;
}