#include <stdio.h>
#include <math.h>


double mag(double x , double y, double z){
	double mag; 
	
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	
	return mag;
}

int close_to(double tolerance, double point, double value){
	if ((value) >=  (point - tolerance) && (value) <= (point + tolerance)){
			return 1;
	}
		else{
			return 0;
	}
}

double distance(double time){
	
	return 0.5 * 9.8 * pow(time, 2);
	
}

int main(void){
	int orientation, a, b, start, tStart, tStop, t, t0;
    double ax, ay, az, gx, gy, gz, g, magnitude, v, v1, t1, t2, x1, x2, g1;
	g1 = 9.8;
	t0 = 0;
	a = 0;
	b = 0;
	start = 0;
	v = 0;
	t1 = 0;
	t2 = 0;
	x1 = 0;
	
	
	printf("Chad Morrow\n");
	printf("271037791\n");
	printf("Ok, I'm now receiving data.\nI'm waiting."); //waiting
	
	scanf(" %d, %lf, %lf, %lf", &t, &gx, &gy, &gz);
	while(close_to(0.35, 1, mag(gx, gy, gz))) {
		fflush(stdout);		
			scanf(" %d, %lf, %lf, %lf", &t, &gx, &gy, &gz);

			if(t-t0>=900 && t-t0<=1100){
				t0=t;
				printf(".");
				
			}
	}
	
			printf("\n\t\tHELP ME I'M FALLING!");
	tStart = t;
	t2 = tStart/1000.0;
	t1 = tStart/1000.0;
	scanf(" %d, %lf, %lf, %lf", &t, &gx, &gy, &gz);
	while(mag(gx, gy, gz)<.9) {
		fflush(stdout);
		scanf(" %d, %lf, %lf, %lf", &t, &gx, &gy, &gz);
		t2 = t/1000.0;
		v1 = v+(g1-(mag(gx,gy,gz)*g1))*(t2-t1);
		v = v1;
		x2 = x1+(v1*(t2-t1));
		x1 = x2;
		//printf("%lf\n", x1);
		t1 = t2;
		//printf("%lf\n", t2);
		magnitude = mag(gx, gy, gz);
		if (magnitude < 0.5){ 
			start = 1;
		}
		
			if(t-t0>=900 && t-t0<=1100){
				t0=t;
				printf("!");
			}
	}
	
	tStop = t;		
	printf("\n\t\t\t\tOuch I fell %lf meters in %lf seconds\n", distance((tStop-tStart)/1000.0), ((tStop-tStart)/1000.0));
	double t3;
	t3 = distance((tStop-tStart)/1000.0);
	printf("Compensating for air resistance, the fall was %lf meters.\nThis is %lf%% less than computed before.", x1,(((t3-x1)/t3)*100));
			return 0;
		}

	
