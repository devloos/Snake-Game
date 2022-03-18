#include "../include/header.h"
bool gameOver;
const int WIDTH {55}, HEIGHT {20};
std::vector <int> tailx;
std::vector <int> taily;
int playerX, playerY, fruitX, fruitY, c, nTail;
Dir dir = Stop;

int main() {
   srand(time(0));
   initscr();
   nodelay(stdscr, TRUE);
   cbreak();
   keypad(stdscr, TRUE);
   setup();
   while(!gameOver) {
      draw();
      input();
      logic();
   }
   endwin();
}