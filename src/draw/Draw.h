#ifndef DRAW_H_
#define DRAW_H_
#include <ncurses.h>
#include <unistd.h>

#include <cstdint>

#include "../constants/Constant.h"
#include "../sprites/Fruit.h"
#include "../sprites/Snake.h"

extern bool GameOver;

namespace Draw {
void Start(const Snake &snake, const Fruit &fruit);
}  // namespace Draw

#endif  // DRAW_H_