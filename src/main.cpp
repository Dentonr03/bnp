#include <ncurses.h>


int main() {
    WINDOW* game_win = initscr();
    if(!game_win) {
        return 1;
    }

    // setup
    noecho();

    // do stuff
    getch();

    // clean up
    endwin();
    return 0;
}