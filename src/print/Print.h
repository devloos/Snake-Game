#ifndef PRINT_H_
#define PRINT_H_
#include <ncurses.h>

#include "../input/Input.h"

namespace Print {
void Menu(WINDOW* menu_win, int highlight);

}  // namespace Print

#endif  // PRINT_H_