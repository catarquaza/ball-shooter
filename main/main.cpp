/*
next steps:
- get debugger working
- fill in board module to set a digital output (coil)
*/

#include <stdio.h>
#include "cannon.hpp"
#include "coil.hpp"
#include "board.hpp"

extern "C" void app_main(void)
{
    // Coil coil;
    // Cannon cannon(coil);

    // Board board;
    Board::init();
    Board::set_output(BoardIo::COIL, true);
}