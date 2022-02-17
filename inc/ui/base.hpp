#ifndef BASE_HPP
#define BASE_HPP


#include "defs.hpp"


class Base {
public:
    Base();
    void set_pos(const int __x, const int __y);
    pos_pair get_pos() const;
    void set_dim(const int __w, const int __h);
    dim_pair get_dim() const;
private:
    pos_pair _pos;
    dim_pair _dim;
};


#endif // BASE_HPP