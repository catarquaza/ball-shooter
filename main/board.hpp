enum class BoardIo
{
    COIL = 0,
    ECHO_TX,
    ECHO_RX,
    FIRE_BTN
};

void init();
void set_output(BoardIo io, bool level);
bool read_input(BoardIo io);