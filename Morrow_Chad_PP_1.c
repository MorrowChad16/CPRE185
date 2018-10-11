#include <stdio.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 1
         <Reflection 1 What were you trying to learn or achieve?>
			I was trying to create a program to solve how many evolves I can do in Pokemon Go. This one does the three easiest forms of evolving. 
			There are many more but I did not implement them into the code. I may come back to this and create one for every evolve to use it every time 
			I need to check the number of evolves I can do. I used fuctions for the levels of evolve. It seems sloppy and repetitive, but I slimmed it up a little. 
        <Reflection 2 Were you successful? Why or Why not?>
			I was successful with creating the code. It will tell me how many times I can evolve basic, normal, and speciality pokemon. I used integers because 
			I wanted only complete evolves. 
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			I would try to slim down the overall code. The phrase used in the main function is repetitive, so I could somehow change this. 
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			I should've planned ahead. Next free code I will think and write it out before jumping right in. 
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
int pokeCandy(int a);
int pinapCandy(int p);
int walkCandy(int w);
int main(){
	
	int f, a, p, w;
	a = pokeCandy(a);
	p = pinapCandy(p);
	w = walkCandy(w);
	
	scanf("%d", &a);
	scanf("%d", &p);
	scanf("%d", &w);
	f = (walkCandy(w) + pinapCandy(p) + pokeCandy(a));
	
	printf("If you catch %d basic pokemon with no pinap berry, %d basic pokemon with a pinap berry and walk %d km you can evolve it %d times\n", a, p, w, f/10); 
	
			printf("If you catch %d normal pokemon with no pinap berry, %d normal pokemon with a pinap berry and walk %d km you can evolve it %d times\n", a, p, w, f/15);
		
					printf("If you catch %d special pokemon with no pinap berry, %d special pokemon with a pinap berry and walk %d km you can evolve it %d times\n", a, p, w, f/25);
					
					return 0;


}

