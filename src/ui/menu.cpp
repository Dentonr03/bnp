#include <string.h>

#include "menu.hpp"


Menu::Menu(const char* __title):
    _menu(nullptr), _title({__title, (unsigned short) strlen(__title)}),
    _title_pos({0, 2}), _using_title(1) {}

Menu::Menu():
    _menu(nullptr), _title({nullptr, 0}), _title_pos({0, 2}),
    _using_title(0) {}

bool Menu::init() {
    this->_menu = newwin(
        this->get_dim().h, this->get_dim().w,
        this->get_pos().y, this->get_pos().x
    );

    if(!this->_menu) {
        return 0;
    }

    refresh();
    return 1;
}

void Menu::render() {
    if(!this->_menu) {
        return;
    }

    box(this->_menu, 0, 0);
    if(this->_using_title) {
        mvwprintw(
            this->_menu,
            this->_title_pos.y, (this->get_dim().w - this->_title.len) / 2,
            this->_title.text
        );
    }

    wrefresh(this->_menu);
}

bool Menu::using_title() {
    (this->_title.len && this->_title.text)?
        this->_using_title = 1:
        this->_using_title = 0;
    return this->_using_title;
}
void Menu::set_title(const char* __title) {
    this->_title.text = __title;
    this->_title.len = (unsigned short) strlen(__title);
}

const char* Menu::get_title() const {
    return this->_title.text;
}

pos_pair Menu::get_title_pos() const {
    return this->_title_pos;
}