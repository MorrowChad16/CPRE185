// WII-MAZE Skeleton code written by Jason Erbskorn 2007
// Edited for ncurses 2008 Tom Daniels
// Updated for Esplora 2013 TeamRursch185
// Updated for DualShock 4 2016 Rursch
// Updated for CprE 185, 2017 Daniels


// Headers
#include <stdio.h>
#include <math.h>
#include <ncurses/ncurses.h>
#include <unistd.h>

// Mathematical constants
#define PI 3.14159

// Screen geometry
// Use ROWS and COLS for the screen height and width (set by system)
// MAXIMUMS
#define NUMCOLS 100
#define NUMROWS 80

// Character definitions taken from the ASCII table
#define AVATAR 'A'
#define WALL '*'
#define EMPTY_SPACE ' '


// 2D character array which the maze is mapped into
char MAZE[NUMROWS][NUMCOLS];


// POST: Generates a random maze structure into MAZE[][]
//You will want to use the rand() function and maybe use the output %100.  
//You will have to use the argument to the command line to determine how 
//difficult the maze is (how many maze characters are on the screen).
void generate_maze(int difficulty);

// PRE: MAZE[][] has been initialized by generate_maze()
// POST: Draws the maze to the screen 
void draw_maze(void);


// PRE: -1.0 < x_mag < 1.0
// POST: Returns either -1, 0, or 1 depending on which way to turn or fall straight down.
// You may want to reuse the roll function written in previous labs.  
int calc_roll(float x_mag);

/*
This is the function you should use to print.

mvaddch(int y, int x, char c)

y and x are the position to print at.
c is the charcater to print. 
*/

// Main - Run with './ds4rd.exe -t -g -b' piped into STDIN
void main(int argc, char* argv[])
{
	// setup screen    
	initscr();
	refresh();
    
	// Generate and draw the maze, with initial avatar
    
	// Event loop
	do
	{
    
		// Read data
		
		// Is it time to move?  if so, then move avatar

	} while(1); // Change this to end game at right time 

	// Print the win message
	endwin();
	
	printf("YOU WIN!\n");
}


