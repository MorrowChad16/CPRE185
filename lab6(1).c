#include <stdio.h>
#include <math.h>
#define PI 3.141592653589


//PRE: Arguments must point to double variables or int variables as appropriate
//This function scans a line of DS4 data, and returns
//  True when the square button is pressed
//  False Otherwise
//This function is the ONLY place scanf is allowed to be used
//POST: it modifies its arguments to return values read from the input line.
int read_line(double* g_x, double* g_y, double* g_z, int* time, int* Button_T, int* Button_X, int* Button_S, int* Button_C){
	scanf("%d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d", time, g_x, g_y, g_z, Button_T, Button_S, Button_X, Button_C);
	
	if(*Button_S == 1){
		return 1;
	}
	if(*Button_S == 0){
		return 0;
	}

// PRE: -1.0 <= x_mag <= 1.0
// This function computes the roll of the DS4 in radians
// if x_mag outside of -1 to 1, treat it as if it were -1 or 1
// POST: -PI/2 <= return value <= PI/2
double roll(double x_mag){
	if(x_mag < -1.0){
		x_mag = -1.0;
	}
	if(x_mag > 1.0){
		x_mag = 1.0;
	}
	return x_mag * (PI/2);
}

// PRE: -1.0 <= y_mag <= 1.0
// This function computes the pitch of the DS4 in radians
// if y_mag outside of -1 to 1, treat it as if it were -1 or 1
// POST: -PI/2 <= return value <= PI/2
double pitch(double y_mag){
	if(y_mag < -1.0){
		y_mag = -1.0;
	}
	if(y_mag > 1.0){
		y_mag = 1.0;
	}
	return y_mag * (PI/2);
}

// PRE: -PI/2 <= rad <= PI/2
// This function scales the roll value to fit on the screen
// POST: -39 <= return value <= 39
int scaleRadsForScreen(double rad){
	return rad/(PI/2) * 39; 
}

// PRE: num >= 0
// This function prints the character use to the screen num times
// This function is the ONLY place printf is allowed to be used
// POST: nothing is returned, but use has been printed num times
void print_chars(int num, char use){
	for(num=0; num<=39; num++){
		printf("%c", use);
	}
}

//PRE: -39 <= number <=39
// Uses print_chars to graph a number from -39 to 39 on the screen.
// You may assume that the screen is 80 characters wide.
void graph_line(int number){
	
}

int main()
{
	double x, y, z;                             // magnitude values of x, y, and z
	int b_Triangle, b_X, b_Square, b_Circle;    // variables to hold the button statuses
	double roll_rad, pitch_rad;                 // value of the roll measured in radians
	int scaled_value;                           // value of the roll adjusted to fit screen display

	//insert any beginning needed code here

	do
	{
		// input 

		// calculate roll and pitch.  Use the buttons to set the condition for roll and pitch

		// switch between roll and pitch(up vs. down button)

		// Scale your output value

		// Output your graph line


		fflush(stdout);
	} while (read_line(&x, &y, &z, &b_Triangle, &b_X, &b_Square, &b_Circle));
		
		if(b_Square==1){
	return 0;
		}
}
