#include "defs.hpp"
#include "version.hpp"


const char* get_version(void) {
    return  "v" TO_STR(BNP_VER_MAJOR)
            "." TO_STR(BNP_VER_MINOR)
            "." TO_STR(BNP_VER_PATCH);
}