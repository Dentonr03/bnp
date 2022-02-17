#include <ncurses.h>

#include "menu.hpp"


// todo: error checking and handling for ncurses functions

int main() {
    WINDOW* game_win = initscr();
    if(!game_win) {
        return 1;
    }

    // setup
    noecho();
    Menu main_menu("Bits 'N Pieces");
    main_menu.set_dim(U2LF(getmaxx(game_win)), U2LF(getmaxy(game_win)));
    main_menu.set_pos(U4TH(getmaxx(game_win)), U4TH(getmaxy(game_win)));
    main_menu.init();
    main_menu.update();
    main_menu.render();

    // do stuff
    getch();

    // clean up
    endwin();
    return 0;
}