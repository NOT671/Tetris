#include "game.h"

namespace gm
{
    bool running;
    int  row;
    int  col;

    void init()
    {
        running = true;
        row = 2;
        col = 15;
    }

    void quit()
    {
        running = false;
    }

    void rotate()
    {

    }

    void left()
    {
        col--;
    }

    void right()
    {
        col++;
    }

    void down()
    {
        row++;
    }
}