#ifndef DEFS_HPP
#define DEFS_HPP


#define STRINGIFY(_data)    #_data
#define TO_STR(_data)       STRINGIFY(_data)


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

#endif // DEFS_HPP