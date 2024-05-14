
#include "cannon.hpp"

void Cannon::fire()
{
    coil.pulse(250);
}

bool Cannon::is_ready()
{
    return true;
}