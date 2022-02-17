#ifndef MENU_HPP
#define MENU_HPP


#include "base.hpp"


class Menu: public Base {
public:
    Menu(const char* __title);
    Menu();
    bool using_title();
    void set_title(const char* __title);
    const char* get_title() const;
    pos_pair get_title_pos() const;
private:
    text_pair _title;
    pos_pair _title_pos;
    bool _using_title;
};

#endif // MENU_HPP