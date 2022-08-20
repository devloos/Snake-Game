#ifndef APPLICATION_H_
#define APPLICATION_H_
#include <ncurses.h>

#include <vector>

#include "../input/Input.h"

enum Dir { Stop = 0, Up, Down, Left, Right };
extern bool gameOver;
extern const int WIDTH, HEIGHT;
extern std::vector<int> tailx;
extern std::vector<int> taily;
extern int playerX, playerY, fruitX, fruitY, c, nTail;
extern char* choices[];
extern bool choiceMade;

void draw();
void input();
void logic();

namespace Application {
void Start();
void Setup();

}  // namespace Application

#endif  // APPLICATION_H_