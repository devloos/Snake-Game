#include "../include/header.h"

void setup() {
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