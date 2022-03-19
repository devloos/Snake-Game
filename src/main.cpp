#include "../include/header.h"
bool gameOver;
const int WIDTH {55}, HEIGHT {20};
std::vector <int> tailx;
std::vector <int> taily;
int playerX, playerY, fruitX, fruitY, c, nTail;
Dir dir = Stop;
char *choices[] = { "Play", "Exit"};
int n_choices = sizeof(choices) / sizeof(char *);

int main() {
	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
   bool choiceMade = false;

	initscr();
	clear();
	noecho();
	cbreak();	/* Line buffering disabled. pass on everything */

	menu_win = newwin(4, 11, 2, 30);

	keypad(menu_win, TRUE);
	refresh();
	print_menu(menu_win, highlight);
	while(!choiceMade)
	{
		c = wgetch(menu_win);
		switch(c)
		{	
			case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else 
					++highlight;
				break;
			case 10:
				choice = highlight;
				break;
			default:
				mvprintw(24, 0, "Invalid Character press");
				refresh();
				break;

		}
      print_menu(menu_win, highlight);
		if(choice == 1)	/* User did a choice come out of the infinite loop */
         choiceMade = true;
      else if (choice == 2) {
         choiceMade = true;
         gameOver = true;
      }
	}	
	refresh();
	endwin();
//--------------------------------------------------------------------------------
   if (!gameOver) {
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
}