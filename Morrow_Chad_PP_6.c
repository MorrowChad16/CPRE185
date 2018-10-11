#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*         Chad Morrow
        morrowc@iastate.edu
        CPRE 185 Section E  
Programming Practice NUMBER 5
         <Reflection 1 What were you trying to learn or achieve?>
			We had to implement functions from the string and stdlib areas. I barely know these, so I had to reteach myself how to use them correctly. 
			Coming into this I had to direct intention on a certain peice of code, so I found examples and twisted them to be my own. 
        <Reflection 2 Were you successful? Why or Why not?>
			Somewhat, I was able to use everything besides the malloc. I am still a little confused on when and why to use this call. I tried to give person
			hints in rounds on 2 states. After each hint the person would guess and they would be given another hint until I gave them the answer. 
		<Reflection 3 Would you do anything differently if starting this program over?  If so, explain what.>
			I would look up an example that uses all of them together. I looked at examples one by one which led to rewriting at the end. 
			There is a lot of repetitiveness in the code so I could add in a few functions.
		<Reflection 4 Think about the most important thing you learned when writing this piece of code.  What was it and explain why it was significant.>
			I have a better grasp on these calls and when to use them, besides malloc. The examples and peices I read over these functions nailed 
			the concepts. Remembering the null sign at the end of a strnlen command tricked me for awhile, as I had random symbols popping up. 
		<Other questions/comments for Instructors>
			How could I use malloc here to read the user's guess and save it for later?
*/

int main(){
		int userInput;
		char w1[15] = "Illinois";
		char ew1[15];
		char w2[15] = "California";
		char ew2[15];
		int i, num;
		int* userGuess = NULL;
		
		printf("The length of State 1 is: %d\n", strlen(w1));
		printf("The length of State 2 is: %d\n", strlen(w2));
		
		userGuess = (int*)malloc(num * sizeof(int));
		printf("Your first guess is....\n");
		scanf("%d", &(userGuess[0]));
		
		strncpy(ew1, "Illinois", 1);
		ew1[1] = '\0';
		printf("The first letter for State 1 is: %s\n", ew1);
		strncpy(ew2, "California", 1);
		ew2[1] = '\0';
		printf("The first letter for State 2 is: %s\n", ew2);
		
		printf("Your second guess is....\n");
		scanf("%d", &(userGuess[0]));
		
		printf("Did you guess the States? YES=1, NO=0\n");
		scanf("%d", &userInput);
		strcat(w1, w2);
		if(userInput == 1){
			printf("GREAT!");
		}
		else{
			printf("They were: %s\n", w1);	
		}

}