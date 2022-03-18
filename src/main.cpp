#include "../include/header.h"
bool gameOver;
const int WIDTH {55}, HEIGHT {20};
std::vector <int> tailx;
std::vector <int> taily;
int playerX, playerY, fruitX, fruitY, c, nTail;
Dir dir = Stop;
char *choices[] = { 
			"Play",
			"Exit",
		  };
int n_choices = sizeof(choices) / sizeof(char *);

int main() {
	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
	int c;

	initscr();
	clear();
	noecho();
	cbreak();	/* Line buffering disabled. pass on everything */

	menu_win = newwin(4, 11, 0, 0);

	keypad(menu_win, TRUE);
	refresh();
	print_menu(menu_win, highlight);
	while(1)
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
				mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'", c, c);
				refresh();
				break;
		}
		if(choice != 0) {	/* User did a choice come out of the infinite loop */
         if (choice == 2)
            gameOver = true;
			break;
      }
	}	
	refresh();
	endwin();
//--------------------------------------------------------------------------------
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