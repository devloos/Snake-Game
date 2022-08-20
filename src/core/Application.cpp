#include "Application.h"
bool gameOver;
const int WIDTH{55}, HEIGHT{20};
std::vector<int> tailx;
std::vector<int> taily;
int playerX, playerY, fruitX, fruitY, c, nTail;
Dir dir = Stop;
bool choiceMade;

namespace Application {
void Start() {
  srand(time(0));
  setup();
  Input::Menu();
  if (!gameOver) {
    initscr();
    nodelay(stdscr, TRUE);
    cbreak();
    keypad(stdscr, TRUE);
    while (!gameOver) {
      draw();
      input();
      logic();
    }
    endwin();
  }
}

}  // namespace Application
