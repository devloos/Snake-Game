#include "../include/header.h"

void draw() {
   usleep(50000);
   clear();
   for (int i {0}; i < WIDTH + 2; i++) {
      printw("#");//##################
   }
   printw("\n");

   for (int y {0}; y < HEIGHT; y++) {
      for (int x {0}; x < WIDTH; x++) {
         if (x == 0)
            printw("#");
         
         if (y == playerY && x == playerX)
            printw("O");
         else if(y == fruitY && x == fruitX)
            printw("X");
         else {
            bool print = false;
            for (int i = 0; i < nTail; i++) {
               if (tailx.at(i) == x && taily.at(i) == y) {
                  printw("o");
                  print = true;
               }
            }
            if (!print)
               printw(" ");
         }

         if (x == WIDTH - 1)
            printw("#");
      }
      printw("\n");
   }
   for (int i {0}; i < WIDTH + 2; i++) {
      printw("#");
   }
   printw("\n");
}