#include <string.h>

#include "menu.hpp"


Menu::Menu(const char* __title):
    _title({__title, (unsigned short) strlen(__title)}),
    _title_pos({0, 2}), _using_title(1) {}

Menu::Menu():
    _title({nullptr, 0}), _title_pos({0, 2}),
    _using_title(0) {}

bool Menu::update() {
    if(this->_using_title) {
        if(mvwprintw(this->_win, this->_title_pos.y,
            (this->get_dim().w - this->_title.len) / 2, this->_title.text)
        == -1) {
            return 0;
        }
    }

    return 1;
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