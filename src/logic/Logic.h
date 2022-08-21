#ifndef LOGIC_H_
#define LOGIC_H_
#include <stdlib.h>
#include <unistd.h>

#include "../constants/Constant.h"
#include "../sprites/Fruit.h"
#include "../sprites/Snake.h"

extern bool GameOver;

namespace Logic {
void Start(Snake &snake, Fruit &fruit);
}  // namespace Logic

#endif  // LOGIC_H_