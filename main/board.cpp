#include "board.hpp"

void Board::init()
{
    // set up all the pins
    // TODO: set up relay pin for coil
}

void Board::set_output(BoardIo io, bool level)
{
    // TODO: catch setting coil and apply - need i/o table
}

bool Board::read_input(BoardIo io)
{
    return true;
}