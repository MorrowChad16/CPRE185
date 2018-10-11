#include <stdio.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 1
         <Reflection 1 What were you trying to learn or achieve?>
			I was attempting to create a 2d array that would go through a whole month of weather and display the liklihood
			of it raining. I added in a little reference to family guy based on the percentage.
        <Reflection 2 Were you successful? Why or Why not?>
			Yes, I was able to display the percentages and quote, but UNABLE to randomize the output. If I spent more time I would do a whole
				year with temperature and other aspects all randomized. 
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			 No, I refreshed myself on how to create a 2d array and thought of a creative way to use it and then started the code. 
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			I have a better grasp on 2d arrays. Still need more practice in the future, but having to think of personal code cements it in my brain. 
		<Other questions/comments for Instructors>
			Nope
*/

int perc[4][7]={ 
	{10, 15, 65, 75, 1,  45, 10},
	{5,  7,  8,  12, 95, 2,  74},	
	{15, 25, 14, 78, 20, 21, 22},
	{89, 45, 58, 78, 99, 95, 2}
};

int main(){
	int i=0, j=0;
	
	printf("Chance of rain on: \n");
	for(i=0; i<4; i++){
		for(j=0; j<7; j++){
			printf("Week %d, Day %d =  %d%%  ", i+1, j+1, perc[i][j]);
			if(perc[i][j]>=60){
				printf("ITS RAINING SIDEWAYS!\n");
			}
			else if(perc[i][j]<60 && perc[i][j]>=40){
				printf("IT GON RAIN!\n");
			}
			else if(perc[i][j]<40){
				printf("IT AINT GON RAIN!\n");
			}
		}
	}
	

}