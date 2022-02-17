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
    main_menu.set_dim(getmaxx(game_win) / 2, getmaxy(game_win) / 2);
    main_menu.set_pos(getmaxx(game_win) / 4, getmaxy(game_win) / 4);
    main_menu.init();
    main_menu.render();

    // do stuff
    getch();

    // clean up
    endwin();
    return 0;
}