#include "../include/header.h"

char* choices[] = {"Play", "Exit"};
int n_choices = sizeof(choices) / sizeof(char*);

void menuInput() {
  WINDOW* menu_win;
  int highlight = 1;
  int choice = 0;

  initscr();
  clear();
  noecho();
  curs_set(0);
  cbreak(); /* Line buffering disabled. pass on everything */

  menu_win = newwin(4, 11, 0, 0);

  keypad(menu_win, TRUE);
  refresh();
  do {
    print_menu(menu_win, highlight);
    c = wgetch(menu_win);
    switch (c) {
      case KEY_UP:
        if (highlight == 1)
          highlight = n_choices;
        else
          --highlight;
        break;
      case KEY_DOWN:
        if (highlight == n_choices)
          highlight = 1;
        else
          ++highlight;
        break;
      case 10:
        choice = highlight;
        break;
      default:
        mvprintw(24, 0, "Invalid Character press");
        refresh();
        break;
    }
    if (choice == 1) /* User did a choice come out of the infinite loop */
      choiceMade = true;
    else if (choice == 2) {
      choiceMade = true;
      gameOver = true;
    }
  } while (!choiceMade);
  refresh();
  endwin();
}