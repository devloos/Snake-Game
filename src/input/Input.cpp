#include "Input.h"

namespace Input {
void Menu() {
  bool choiceMade;
  WINDOW* menu_win;
  int Highlighted = PLAY;

  initscr();
  clear();
  noecho();
  curs_set(0);
  cbreak(); /* Line buffering disabled. pass on everything */

  menu_win = newwin(4, 11, 0, 0);

  keypad(menu_win, TRUE);
  refresh();
  do {
    Print::Menu(menu_win, Highlighted);
    c = wgetch(menu_win);
    switch (c) {
      case KEY_UP: {
        if (Highlighted == PLAY) {
          Highlighted = PLAY;
        } else {
          --Highlighted;
        }
        break;
      }
      case KEY_DOWN: {
        if (Highlighted == EXIT) {
          Highlighted = EXIT;
        } else {
          ++Highlighted;
        }
        break;
      }
      case 10: {
        if (Highlighted == EXIT) gameOver = true;
        choiceMade = true;
        break;
      }
      default: {
        mvprintw(24, 0, "Invalid Character press");
        refresh();
        break;
      }
    }
  } while (!choiceMade);
  refresh();
  endwin();
}
}  // namespace Input
