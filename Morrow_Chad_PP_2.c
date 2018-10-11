#include <stdio.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 1
         <Reflection 1 What were you trying to learn or achieve?>
			I tried to build off of my pokemon code from last week by implementing boolean and loops. Instead of informing you how many times you can evolve a pokemon
			the first time I read if you could fully evolve the pokemon. The evolve scale is incremental so that is why it is more important to know
			the full evolve over just the first evolve. 
        <Reflection 2 Were you successful? Why or Why not?>
			I was successful but not the way I wanted it. I had to change my output goal to accomodate for the for loop. I wanted to incorporate both
			the first evolve times as well as if you could fully evolve it. It required to many statements to try. 
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			I would try to think of a way to use my output from last week but build on it so that the code could be useful for me in the future. 
			I could add more functions to accomodate for every type of pokemon. There are around 7 different scenarios for evolving. 
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			I fully understand the boolean method and how to add it into my code. Having to think of your own code for the different methods fully engrains the 
			material in my head. The labs and personal projects help wrap my mind around the subject. 
		<Other questions/comments for Instructors>
			Answer here (optional)
*/


int pokeCandy(int a){ //a = number of pokemon caught 	
	return (a * 3);
}
int pinapCandy(int p){
	return (p * 5);
}
int walkCandy(int w){
	return(w / 3);
}

int main(){
	
	int t, a, p, w, i, b, c, x, y, z;
	a = pokeCandy(a);
	p = pinapCandy(p);
	w = walkCandy(w);
	x = 0;
	y = 0;
	z = 0;
	
	scanf("%d %d %d", &a, &p, &w);
	i = (walkCandy(w) + pinapCandy(p) + pokeCandy(a));
	
	
	while (i<1000){//max capacity
			if (i >= 75 && i < 125 && !x){
				x = 1;
			printf("You can fully evolve a basic pokemon!\n"); 
			}
			else if (i >= 125 && i < 175 && !y){
				y = 1;
			printf("You can fully evolve a normal and a basic pokemon!\n");
			}
			else if(i >= 175 && !z){
				z = 1;
					printf("You can fully evolve a special, normal, and basic pokemon!\n");
			}
			else{
				printf("You don't have enough to evolve any type");
			}
					return 0;
	}

}

