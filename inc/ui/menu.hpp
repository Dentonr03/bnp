#ifndef MENU_HPP
#define MENU_HPP


#include <ncurses.h>

#include "base.hpp"


// todo: move init() and render() methods into Base class
class Menu: public Base {
public:
    Menu(const char* __title);
    Menu();
    bool init();
    void render();
    bool using_title();
    void set_title(const char* __title);
    const char* get_title() const;
    pos_pair get_title_pos() const;
private:
    WINDOW* _menu;
    text_pair _title;
    pos_pair _title_pos;
    bool _using_title;
};

#endif // MENU_HPP