#include <stdio.h>

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

main(){
		//printf("Chad Morrow");
		//printf("271037791");
	if (close_to(0.03, 0, mag(gx, gy, gz))){
		if(close_to(0.2, 1, ay) && orientation != 1){
				printf("Ok, I'm now receiving data."); //beginning
				orientation = 1;
			}
	}
	
	
}