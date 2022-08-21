#ifndef LOGIC_H_
#define LOGIC_H_
#include <unistd.h>

#include "../constants/Constant.h"
#include "../sprites/Snake.h"

extern int fruitX, fruitY;
extern bool gameOver;

namespace Logic {
void Start(Snake &snake);
}  // namespace Logic

#endif  // LOGIC_H_