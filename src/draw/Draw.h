#ifndef DRAW_H_
#define DRAW_H_
#include <ncurses.h>
#include <unistd.h>

#include <cstdint>

#include "../constants/Constant.h"
#include "../sprites/Snake.h"

extern int fruitX, fruitY;
extern bool gameOver;

namespace Draw {
void Start(const Snake &snake);
}  // namespace Draw

#endif  // DRAW_H_