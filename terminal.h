#pragma once

namespace tc // terminal control
{
    void move_to(int row, int col);
    void set_fore_color(int id);
    void set_back_color(int id);
    void clean_cereen();
    void reset_color();
    void hide_corsor();
    void show_corsor();
}