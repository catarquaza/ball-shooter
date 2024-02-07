#include <stdio.h>
#include "cannon.hpp"
#include "coil.hpp"

extern "C" void app_main(void)
{
    Coil coil;
    Cannon cannon(coil);
}