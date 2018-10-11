/* 185 Lab 3 Template */

#include <stdio.h>
#include <math.h>
int totalButtons(int Tri, int Circ, int X, int Sqre){
	int total;
	total = Tri + Circ + X + Sqre; 
	return total;
}

int main(void) {
    int Tri, Circ, X, Sqre;
    
    while (1) {
        scanf("%d, %d, %d, %d", &Tri, &Circ, &X, &Sqre);
		
		printf("%d\n", totalButtons(Tri, Circ, X, Sqre));
		fflush(stdout);
			}
			return 0;
}




