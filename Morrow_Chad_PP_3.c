#include <stdio.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 1
         <Reflection 1 What were you trying to learn or achieve?>
			
        <Reflection 2 Were you successful? Why or Why not?>
			
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			 
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			
		<Other questions/comments for Instructors>
			Answer here (optional)
*/

int main(void){
	int c, i;
	int perc[10] = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55};
	double velo;
	c = 10;
	
	scanf("%lf", velo);
	for(i = 25; i<=c; i++){
		if(velo > 105){
			printf("At an angle of %d you have a %d chance of hitting a homerun", i, perc[i]);
		}
		if(velo<105 && velo > 90){
			printf("At an angle of %d you have a %d chance of hitting a homerun", i, (perc[i]-10));
		}
		if(velo<90 && velo > 70){
			printf("At an angle of %d you have a %d chance of hitting a homerun", i, (perc[i]-20));
		}
		if(velo<70){
			printf("You have a 0% chance of hitting a homerun, hit the weight room");
		}
	}
	
	
	
	
	
}

