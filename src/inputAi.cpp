#include "../include/header.h"

void inputAi() {
  c = rand() % 4 + 1;
  usleep(200000);
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