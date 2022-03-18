#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <vector>
enum Dir { Stop = 0, Up, Down, Left, Right };
extern bool gameOver;
extern const int WIDTH, HEIGHT;
extern std::vector <int> tailx;
extern std::vector <int> taily;
extern int playerX, playerY, fruitX, fruitY, c, nTail;
extern Dir dir;

void setup();
void draw();
void input();
void logic();
#endif