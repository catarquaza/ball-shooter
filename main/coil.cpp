#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include "coil.hpp"
#include "board.hpp"

void Coil::on()
{
    Board::set_output(BoardIo::COIL, 1);
}

void Coil::off()
{
    Board::set_output(BoardIo::COIL, 0);
}

void Coil::pulse(int length)
{
    Board::set_output(BoardIo::COIL, 1);
    vTaskDelay(pdMS_TO_TICKS(length));
    Board::set_output(BoardIo::COIL, 0);
}