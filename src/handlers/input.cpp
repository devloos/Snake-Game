#include "../../include/header.h"

void input() {
  c = getch();
  if (c != -1) {
    switch (c) {
      case KEY_LEFT:
        dir = Left;
        break;
      case KEY_RIGHT:
        dir = Right;
        break;
      case KEY_DOWN:
        dir = Down;
        break;
      case KEY_UP:
        dir = Up;
        break;
      default:
        break;
    }
  }
}