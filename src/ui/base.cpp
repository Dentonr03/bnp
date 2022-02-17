#include "base.hpp"


Base::Base():
    _win(nullptr), _pos({0, 0}), _dim({10, 10}) {}

void Base::set_pos(const int __x, const int __y) {
    this->_pos.x = __x;
    this->_pos.y = __y;
}

pos_pair Base::get_pos() const {
    return this->_pos;
}

void Base::set_dim(const int __w, const int __h) {
    this->_dim.w = __w;
    this->_dim.h = __h;
}

dim_pair Base::get_dim() const {
    return this->_dim;
}

bool Base::init() {
    this->_win = newwin(
        this->get_dim().h, this->get_dim().w,
        this->get_pos().y, this->get_pos().x
    );

    if(!this->_win) {
        return 0;
    }

    refresh();
    return 1;
}

void Base::render() {
    if(!this->_win) {
        return;
    }

    box(this->_win, 0, 0);
    wrefresh(this->_win);
}