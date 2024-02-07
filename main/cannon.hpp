
#include "coil.hpp"

#ifndef CANNON_HPP
#define CANNON_HPP

class Cannon
{
public:
    Cannon(Coil &coil) : coil(coil){};
    void fire();
    bool is_ready();

private:
    Coil &coil;
};

#endif