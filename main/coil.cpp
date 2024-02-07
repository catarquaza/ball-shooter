#include "coil.hpp"
#include "board.hpp"

void Coil::on()
{
    set_output(BoardIo::COIL, 1);
}

void Coil::off()
{
    set_output(BoardIo::COIL, 0);
}