#include <stdio.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 5
         <Reflection 1 What were you trying to learn or achieve?>
			I went back to Pokemon Go as it has plenty of opportunities. I used pointers to breakdown the amount of evolves I can do with a set amount
			of candy. This showed went through the three stages of evolving and then had the leftovers.
        <Reflection 2 Were you successful? Why or Why not?>
			Yes, it outputs the amount at each stage and then leaves the leftovers. 
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			You reccommended loops and control-flow, so I would think of a way to implement that. This was the first thing to pop into my head. 
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			Right now, pointers are the hardest thing to me, so this gave me more experience with it. The book was very brief on it. 
		<Other questions/comments for Instructors>
			Nope
*/
void candyLeft(int* firstE, int* secondE, int* thirdE, int* left, int val){
	*firstE = (val/10) %10;
	*secondE = (val/15) %15;
	*thirdE = (val/25) %25;
	*left = val%10;
	return;
}
int main(void){
	int firstE = 0, secondE = 0, thirdE = 0, left = 0, val = 0;
	val = 215;
	
	candyLeft(&firstE, &secondE, &thirdE, &left, val);
	
	printf("Number of first evolves: %d\nNumber of second evolves: %d\nNumber of third evolves: %d\nCandy left over: %d\n", firstE, secondE, thirdE, left);
	

}