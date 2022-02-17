#include "base.hpp"


Base::Base():
    _pos({0, 0}), _dim({10, 10}) {}

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