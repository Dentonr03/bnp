#ifndef BASE_HPP
#define BASE_HPP


#include "defs.hpp"


class Base {
public:
    Base();
    /** sets the internal position pair with the given coordinates */
    void set_pos(const int __x, const int __y);
    /** returns the position pair */
    pos_pair get_pos() const;
    /** sets the internal dimension pair with the given width and height */
    void set_dim(const int __w, const int __h);
    /** returns the dimension pair */
    dim_pair get_dim() const;
private:
    pos_pair _pos;
    dim_pair _dim;
};


#endif // BASE_HPP