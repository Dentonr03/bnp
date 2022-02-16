#include <ncurses.h>


int main(int __argc, char** __argv) {
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