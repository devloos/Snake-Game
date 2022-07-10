#include "../../include/header.h"

void print_menu(WINDOW* menu_win, int highlight) {
  int x, y, i;
  x = 3;
  y = 1;
  box(menu_win, 4, 11);
  for (i = 0; i < 2; ++i) {
    if (highlight == i + 1) /* High light the present choice */
    {
      wattron(menu_win, A_REVERSE);
      mvwprintw(menu_win, y, x, "%s", choices[i]);
      wattroff(menu_win, A_REVERSE);
    } else
      mvwprintw(menu_win, y, x, "%s", choices[i]);
    ++y;
  }
  wrefresh(menu_win);
}