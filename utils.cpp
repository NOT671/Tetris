#include "utils.h"

#include <chrono>

using namespace std::chrono_literals;

int ut::fps()
{
    static auto start = std::chrono::steady_clock::now();
    static int frame_cout = 0;
    static int fps = 0;

    auto end = std::chrono::steady_clock::now();
    frame_cout++;
    if(end - start > 1s)
    {
        fps = frame_cout;

        frame_cout = 0;
        start = end;
    }

    return fps;
}