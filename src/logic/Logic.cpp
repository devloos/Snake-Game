#include "Logic.h"

namespace Logic {
void Start(Snake &snake, Fruit &fruit) {
  srand(time(0));
  int prevX = snake.GetTailPosAt(0).first;
  int prevY = snake.GetTailPosAt(0).second;
  int prev2X;
  int prev2Y;
  uint16_t PosX = snake.GetHeadPosX();
  uint16_t PosY = snake.GetHeadPosY();

  snake.SetTailPosAt(0, PosX, PosY);

  for (int i = 1; i < snake.GetTailCount(); i++) {
    prev2X = snake.GetTailPosAt(i).first;
    prev2Y = snake.GetTailPosAt(i).second;
    snake.SetTailPosAt(i, prevX, prevY);
    prevX = prev2X;
    prevY = prev2Y;
  }

  switch (snake.GetDirection()) {
    case Dir::Left: {
      --PosX;
      snake.SetHeadPos(PosX, PosY);
      break;
    }
    case Dir::Right: {
      ++PosX;
      snake.SetHeadPos(PosX, PosY);
      break;
    }
    case Dir::Down: {
      usleep(60000);
      ++PosY;
      snake.SetHeadPos(PosX, PosY);
      break;
    }
    case Dir::Up: {
      usleep(60000);
      --PosY;
      snake.SetHeadPos(PosX, PosY);
      break;
    }
    default: {
      break;
    }
  }

  if (PosX > (Constant::WIDTH - 1) || PosY > (Constant::HEIGHT - 1) || PosX < 0 ||
      PosY < 0) {
    GameOver = true;
  } else if (PosX == fruit.GetPosX() && PosY == fruit.GetPosY()) {
    fruit.RandomizePos();
    snake.PushBackTailPos(-2, -2);
    snake.IncTailCount();
  }
  for (int i = 0; i < snake.GetTailCount(); i++) {
    if (PosX == snake.GetTailPosAt(i).first && PosY == snake.GetTailPosAt(i).second) {
      GameOver = true;
    }
  }
}
}  // namespace Logic
