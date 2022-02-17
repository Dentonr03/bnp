#ifndef DEFS_HPP
#define DEFS_HPP


#define STRINGIFY(_data)    #_data
#define TO_STR(_data)       STRINGIFY(_data)

// positioning macros U = upper, L = lower
#define U2LF(_x)    (_x / 2)
#define U3RD(_x)    (_x / 3)
#define L3RD(_x)    ((2 * _x) / 3)
#define U4TH(_x)    (_x / 4)
#define L4TH(_x)    ((_x * 3) / 4)


// position pair
typedef struct {
    int x;  // horizontal offset
    int y;  // vertical offset
} pos_pair;

// dimension pair
typedef struct {
    int w;  // width
    int h;  // height
} dim_pair;

typedef struct {
    const char* text;   // content
    unsigned short len; // length
} text_pair;

#endif // DEFS_HPP