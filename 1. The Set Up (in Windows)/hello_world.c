#include <stdio.h>
#include <ncurses.h>

int main(void)
{
    initscr();
    addstr("Hello World!");
    refresh();

    getch();

    endwin();

    return 0;
}
