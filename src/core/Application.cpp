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
  Setup();
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

void Setup() {
  tailx.clear();
  taily.clear();

  gameOver = false;

  playerX = WIDTH / 2;
  playerY = HEIGHT / 2;

  fruitX = rand() % WIDTH;
  fruitY = rand() % HEIGHT;

  tailx.push_back(playerX);
  taily.push_back(playerY);

  nTail = 0;
}

}  // namespace Application
