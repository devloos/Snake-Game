#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <vector>
enum Dir { Stop = 0, Up, Down, Left, Right };
extern Dir dir;
extern bool gameOver;
extern const int WIDTH, HEIGHT;
extern std::vector <int> tailx;
extern std::vector <int> taily;
extern int playerX, playerY, fruitX, fruitY, c, nTail;
extern char *choices[];
extern bool choiceMade;

void print_menu(WINDOW *menu_win, int highlight);
void menuInput();
void inputAi();
void setup();
void draw();
void input();
void logic();
#endif