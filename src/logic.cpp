#include "../include/header.h"

void logic() {
   int prevX, prevY, prev2X, prev2Y;
   prevX = tailx.at(0);
   prevY = taily.at(0);
   tailx.at(0) = playerX;
   taily.at(0) = playerY;
   for (int i = 1; i < nTail; i++) {
      prev2X = tailx.at(i);
      prev2Y = taily.at(i);
      tailx.at(i) = prevX;
      taily.at(i) = prevY;
      prevX = prev2X;
      prevY = prev2Y;
   }
   switch(dir) {
      case Left:
         --playerX;
         break;
      case Right:
         ++playerX;
         break;
      case Down:
         usleep(60000);
         ++playerY;
         break;
      case Up:
         usleep(60000);
         --playerY;
         break;
      default:
         break;
   }
   if (playerX > WIDTH || playerY > (HEIGHT - 1) || playerX < 0 || playerY < 0)
      gameOver = true;
   else if (playerX == fruitX && playerY == fruitY) {
      fruitX = rand() % WIDTH;
      fruitY = rand() % HEIGHT;
      tailx.push_back(-1);
      taily.push_back(-1);
      ++nTail;
   }
   for (int i = 0; i < nTail; i++) {
      if (playerX == tailx.at(i) && playerY == taily.at(i))
         gameOver = true;
   }
}