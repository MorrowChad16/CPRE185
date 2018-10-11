/*-----------------------------------------------------------------------------
-					         SE/CprE 185 Lab 04
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
double mag(double x , double y, double z);

double mag(double x , double y, double z){
	double mag; 
	
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	
	return mag;
}

int close_to(double tolerance, double point, double value);

int close_to(double tolerance, double point, double value){
	if ((value) >=  (point - tolerance) && (value) <= (point + tolerance)){
			return 1;
	}
		else{
			return 0;
	}
}

int buttonPress(int button){
	if(button==1);
	return 0;
};




int main(void) {
    int t, b1, b2, b3, b4, orientation;
    double ax, ay, az, gx, gy, gz;
	
    while (1) {
        scanf("%d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d", &t, &gx, &gy, &gz, &ax, &ay, &az, &b1, &b2, &b3, &b4);
		
		buttonPress(b1);
		if(b1==1){
			return 0;
		}
		
        /* printf for observing values scanned in from ds4rd.exe, be sure to comment or remove in final program */
        printf("Echoing output: %d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n", t, ax, ay, az, gx, gy, gz, b1, b2, b3, b4);
		
		

       //printf("At %d ms, the acceleration's magnitude was: %f\n", t, mag(ax, ay, az));
	   //printf("%lf\n", mag(gx, gy, gz));
		/*if (close_to(0.03, 0, mag(gx, gy, gz))){
			if(close_to(0.2, 1, ay) && orientation != 1){
				printf("Top\n"); //Flat
				orientation = 1;
			}
			else if(close_to(0.3, -1, ay) && orientation != 2){
				printf("Bottom\n"); //Upside Down
				orientation = 2;
			}
			else if(close_to(0.3, 1, ax) && orientation != 3){
				printf("Left\n"); //Left
				orientation = 3;
			}
			else if(close_to(0.3, -1, ax) && orientation != 4){
				printf("Right\n"); //Right
				orientation = 4;
			}
			else if(close_to(0.3, -1, az) && orientation != 5){
				printf("Front\n"); // Up
				orientation = 5;
			}
			else if(close_to(0.3, 1, az) && orientation != 6){
				printf("Back\n"); // Down
				orientation = 6;
			}
		}*/
		
	}
    return 0;
}
		
	