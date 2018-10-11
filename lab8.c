// WII-MAZE Skeleton code written by Jason Erbskorn 2007
// Edited for ncurses 2008 Tom Daniels
// Updated for Esplora 2013 TeamRursch185
// Updated for DualShock 4 2016 Rursch
// Updated for CprE 185, 2017 Daniels

#include <stdio.h>
#include <math.h>
#include <ncurses/ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159

#define NUMCOLS 100
#define NUMROWS 80

#define AVATAR 'A'
#define WALL '*'
#define EMPTY_SPACE ' '


char MAZE[NUMROWS][NUMCOLS];

void generate_maze(int difficulty){
	int i, j;
	srand(time(NULL));
	for(i=0; i< NUMROWS; i++){
		for(j=0; j< NUMCOLS; j++){
		if(difficulty>rand()%100){
		MAZE[i][j]=WALL;
		}
		else{
		MAZE[i][j]=EMPTY_SPACE;
		}
		}
	}
}

void draw_maze(void){
	int i, j;
	for(i=0; i<NUMROWS; i++){
		for(j=0; j<NUMCOLS; j++){
		if(MAZE[i][j] == WALL){
			mvaddch(i, j, WALL);
		}
		}
	}
}

void draw_character(int x, int y, char use){
	int i, j;
	for(i=0; i<NUMCOLS; i++){
		for(j=0; j<NUMROWS; j++){
			mvaddch(i, j, AVATAR);
		}
	}
}

int calc_roll(float x_mag){
	if(x_mag < -1.0){
		x_mag = -1.0;
	}
	if(x_mag > 1.0){
		x_mag = 1.0;
	}
	return x_mag * (PI/2);
}

void main(int argc, char* argv[])
{
	initscr();
	refresh();
	int difficulty = atoi(argv[1]);
	generate_maze(difficulty);
	draw_maze();
	refresh();
	int x, y, time;
	int t0 = 0;
	double x1, x2, gx, gy, gz;
	x = 39;
	y = 0;
	mvaddch(y, x, 'A');
	
	
	
	do{
		scanf("%d, %lf, %lf, %lf", &time, &gx, &gy, &gz);
		if(time-t0>=500){
			t0 = time;
			mvaddch(y, x, ' ');
			
			if(MAZE[y+1][x] == WALL && MAZE[y][x-1] == WALL && MAZE[y][x+1] == WALL){
				printf("YOU LOSE!");
			}
			if(calc_roll(gx)>0.7 && x>0 && MAZE[y][x-1] != WALL){
				mvaddch(y, x, ' ');
				--x;		
			}
			if(calc_roll(gx)<-0.7 && x<NUMCOLS && MAZE[y][x+1] != WALL){
				mvaddch(y, x, ' ');
				++x;	
			}
			if(MAZE[y+1][x]!=WALL){
				mvaddch(y, x, ' ');
				++y;
			}
			mvaddch(y, x, AVATAR);
			
		refresh();
		}
	} while(y<NUMROWS); 

	endwin();
		
	printf("YOU WIN!\n");
}




