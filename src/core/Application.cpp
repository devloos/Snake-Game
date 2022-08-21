#include "Application.h"
bool GameOver = false;

namespace Application {
void Start() {
  Snake snake(Constant::WIDTH / 2, Constant::HEIGHT / 2, Dir::Stop);
  Fruit fruit(rand() % Constant::WIDTH, rand() % Constant::HEIGHT);
  Setup(snake);
  if (Input::Play()) {
    initscr();
    nodelay(stdscr, TRUE);
    cbreak();
    keypad(stdscr, TRUE);
    while (!GameOver) {
      Draw::Start(snake, fruit);
      Input::Start(snake);
      Logic::Start(snake, fruit);
    }
    endwin();
  }
}

void Setup(Snake &snake) {
  snake.PushBackTailPos(snake.GetHeadPosX(), snake.GetHeadPosY());
}

}  // namespace Application
