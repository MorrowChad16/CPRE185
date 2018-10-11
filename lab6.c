#include <stdio.h>
#include <math.h>
#define PI 3.141592653589

int read_line(double* g_x, double* g_y, double* g_z, int* time, int* Button_T, int* Button_X, int* Button_S, int* Button_C){
	scanf("%d, %lf, %lf, %lf, %d, %d, %d, %d", time, g_x, g_y, g_z, Button_T, Button_C, Button_X, Button_S);
	
	if(*Button_S == 1){
		return 1;
	}
	else{
		return 0;
	}
}

double roll(double x_mag){
	if(x_mag < -1.0){
		x_mag = -1.0;
	}
	if(x_mag > 1.0){
		x_mag = 1.0;
	}
	return asin(x_mag);
}

double pitch(double y_mag){
	if(y_mag < -1.0){
		y_mag = -1.0;
	}
	if(y_mag > 1.0){
		y_mag = 1.0;
	}
	return asin(y_mag);
}

int scaleRadsForScreen(double rad){
	return rad*(39/(PI/2.0)); 
}

void print_chars(int num, char use){
		int i;
		
		for(i = 0; i<num; i++){
			printf("%c", use);
		}		
}

void graph_line(int number){
	if(number < 0 && number >= -39){
		print_chars((40+number), ' ');
		print_chars(fabs(number), 'L');
		printf("\n");
	}
	if(number == 0){
		print_chars(39, ' ');
		print_chars(1, 'O');
		printf("\n");
	}
	if(number > 0 && number <= 39){
		print_chars(39, ' ');
		print_chars(number , 'R');
		printf("\n");
	}
}

int main()
{
	double x, y, z;                             
	int b_Triangle, b_X, b_Square, b_Circle, time, different, change;    
	double roll_rad, pitch_rad;                
	int scaled_value;                          
	time = 0;
	different = 0;
	change = 0;
	

	do
	{
		read_line(&x, &y, &z, &time, &b_Triangle, &b_X, &b_Square, &b_Circle);

		if(b_Triangle == 1 && change == 0){
			
			if(different == 1){
				different = 0;
			}
			else if(different == 0){
				different = 1;
			}
			change = 1;
		}
		
		/*if(b_X == 1){
			different = 0;
		}*/
		
		if (different == 0){
			
			roll_rad = roll(x);
			scaled_value = scaleRadsForScreen(roll_rad);
		}
		
		if (different == 1){
			b_X = 1;
			pitch_rad = pitch(y);
			scaled_value = scaleRadsForScreen(pitch_rad);
		}
			if(b_Triangle == 0){
				change = 0;
			}
		
		
		graph_line(scaled_value);


		fflush(stdout);
	} while (b_Square == 0);	
	return 0;
}
