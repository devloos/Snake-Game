#include "../include/header.h"
bool gameOver;
const int WIDTH {55}, HEIGHT {20};
std::vector <int> tailx;
std::vector <int> taily;
int playerX, playerY, fruitX, fruitY, c, nTail;
Dir dir = Stop;
bool choiceMade;

int main() {
   srand(time(0));
   do {
      setup();
      menuInput();
      if (!gameOver) {
         initscr();
         nodelay(stdscr, TRUE);
         cbreak();
         keypad(stdscr, TRUE);
         while(!gameOver) {
            draw();
            input();
            logic();
         }
         endwin();
         choiceMade = false;
      }
   } while (!choiceMade);
}