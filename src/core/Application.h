#ifndef APPLICATION_H_
#define APPLICATION_H_
#include <ncurses.h>

#include <vector>

#include "../constants/Constant.h"
#include "../draw/Draw.h"
#include "../input/Input.h"
#include "../logic/Logic.h"
#include "../sprites/Snake.h"

extern bool gameOver;

namespace Application {
void Start();
void Setup(Snake &snake);

}  // namespace Application

#endif  // APPLICATION_H_