#ifndef INPUT_H_
#define INPUT_H_
#include <ncurses.h>

#include <cstdint>
#include <string>

#include "../print/Print.h"
#include "../sprites/Snake.h"
#include "../states/Direction.h"
extern bool gameOver;

namespace Input {
const std::string choices[] = {"Play", "Exit"};
const uint8_t PLAY = 1;
const uint8_t EXIT = 2;

bool Play();
void Start(Snake &snake);
}  // namespace Input

#endif  // INPUT_H_