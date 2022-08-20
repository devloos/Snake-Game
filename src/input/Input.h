#ifndef INPUT_H_
#define INPUT_H_
#include <ncurses.h>

#include <string>

#include "../print/Print.h"
extern int c;
extern bool gameOver;

namespace Input {
const std::string choices[] = {"Play", "Exit"};
const int n_choices = sizeof(choices);

void Menu();
}  // namespace Input

#endif  // INPUT_H_