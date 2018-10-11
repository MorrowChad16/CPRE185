/* 185 Lab 3 Template */

#include <stdio.h>
#include <math.h>

double mag(double x , double y, double z){
	double mag; 
	
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	
	return mag;
}
int minutes(int t){
	int min;
	min = t/60000;
	
	return min;
}
int seconds(int t){
	int sec;
	sec = (t/1000)-minutes(t) * 60;
	
	return sec;
}
int millis(int t){
	int mill;
	mill = (t%1000);
	
	return mill;
}

int main(void) {
    /* DO NOT MODIFY THESE VARIABLE DECLARATIONS */
    int t;
    double  ax, ay, az;   
	
	

    /* This while loop makes your code repeat. Don't get rid of it. */
    while (1) {
        scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az); 

/* CODE SECTION 0 
        printf("Echoing output: %8.3d, %7.4lf, %7.4lf, %7.4lf\n", t / 1000, ax, ay, az);*/

/* CODE SECTION 1 */
        /*printf("At %d ms, the acceleration's magnitude was: %lf\n", 
            t, mag(ax, ay, az));  */
            
/* CODE SECTION 2 */
        printf("At %d minutes, %d seconds, and %d milliseconds it was: %lf\n", 
        minutes(t), seconds(t), millis(t), mag(ax,ay,az)); 

    }

return 0;
}




