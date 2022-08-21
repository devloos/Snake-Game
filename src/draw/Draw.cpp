#include "Draw.h"

namespace Draw {
void Start(const Snake &snake, const Fruit &fruit) {
  usleep(50000);
  clear();
  for (int i{0}; i < Constant::WIDTH + 2; i++) {
    printw("#");  // ##################
  }
  printw("\n");

  for (int y{0}; y < Constant::HEIGHT; y++) {
    for (int x{0}; x < Constant::WIDTH; x++) {
      if (x == 0) printw("#");

      if (y == snake.GetHeadPosY() && x == snake.GetHeadPosX())
        printw("O");
      else if (y == fruit.GetPosY() && x == fruit.GetPosX())
        printw("X");
      else {
        bool print = false;
        for (int i = 0; i < snake.GetTailCount(); i++) {
          if (snake.GetTailPosAt(i).first == x && snake.GetTailPosAt(i).second == y) {
            printw("o");
            print = true;
          }
        }
        if (!print) printw(" ");
      }

      if (x == Constant::WIDTH - 1) printw("#");
    }
    printw("\n");
  }
  for (int i{0}; i < Constant::WIDTH + 2; i++) {
    printw("#");
  }
  printw("\n");
}

}  // namespace Draw
