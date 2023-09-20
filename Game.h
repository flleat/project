#include <iostream>
#include <curses.h>

using namespace std;

class Game
{
    public:
        void initialize(int height, int width);
        void set_status(int new_status);
        int get_status();
        void game_over();

    private:
        int status;
};

void Game::initialize(int height, int width)
{
    // initscr();
    // WINDOW* win = newwin(height, width, 0, 0);
    // box(win, 0, 0);
    // mvwprintw(win, 0, 0, "Hello World!");
    // refresh();
    // wrefresh(win);
    // getch();
    // endwin();
}

void Game::set_status(int new_status)
{
    this->status = new_status;
}

int Game::get_status()
{
    return this->status;
}

void Game::game_over()
{
}