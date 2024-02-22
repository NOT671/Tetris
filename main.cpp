#include <iostream>
#include <thread>
#include <chrono>
#include "terminal.h"
#include "utils.h"

using namespace std::chrono_literals;

void init()
{
    tc::hide_corsor();
}

void loop()
{
    int i = 1;

    while(true)
    {
        tc::clean_cereen();

        tc::move_to(1, 1);
        std::cout << "FPS: " << ut::fps();

        tc::move_to(i++ % 20, 10);
        tc::set_back_color(15);
        std::cout << "  ";
        tc::reset_color();
        std::cout<<std::flush;
        std::this_thread::sleep_for(100ms);
    }
}

void exit()
{
    tc::show_corsor();
    tc::reset_color();
}

int main()
{
    init();
    loop();
    exit();

    return 0;
}