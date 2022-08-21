#include "Application.h"
bool gameOver;
int fruitX, fruitY;

namespace Application {
void Start() {
  Snake snake(Constant::WIDTH / 2, Constant::HEIGHT / 2, Dir::Stop);
  Setup(snake);
  if (Input::Play()) {
    initscr();
    nodelay(stdscr, TRUE);
    cbreak();
    keypad(stdscr, TRUE);
    while (!gameOver) {
      Draw::Start(snake);
      Input::Start(snake);
      Logic::Start(snake);
    }
    endwin();
  }
}

void Setup(Snake &snake) {
  gameOver = false;

  fruitX = rand() % Constant::WIDTH;
  fruitY = rand() % Constant::HEIGHT;

  snake.PushBackTailPos(snake.GetHeadPosX(), snake.GetHeadPosY());
}

}  // namespace Application
