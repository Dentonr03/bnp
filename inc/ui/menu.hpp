#ifndef MENU_HPP
#define MENU_HPP


#include "base.hpp"


class Menu: public Base {
public:
    Menu(const char* __title);
    Menu();
    /** returns 1 if the title is being used 0 otherwise */
    bool using_title();
    /** sets the menu title to the given string */
    void set_title(const char* __title);
    /** returns the menu title */
    const char* get_title() const;
    /** returns the menu title coordinate pair */
    pos_pair get_title_pos() const;
    /** handles redrawing. Returns 1 on success and 0 otherwise */
    bool update();
private:
    text_pair _title;
    pos_pair _title_pos;
    bool _using_title;
};

#endif // MENU_HPP