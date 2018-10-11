#include <stdio.h>

void scanISBN(int arr[10]){
	int var, i, t;

	for(i = 0; i<=9; i++){
		scanf("%1d", &var);
		arr[i] = var;
	}
} 

int isValidISBN(int isbn[10]){
	int i, total;
	total = (10 *isbn[0]) +(9 *isbn[1])+(8 *isbn[2])+(7 *isbn[3])+(6 *isbn[4])+(5 *isbn[5])+(4 *isbn[6])+(3 *isbn[7])+(2 *isbn[8])+(1 *isbn[9]);
		total = total%11;
		if(total == 0){
			return 1;
		}
		else{
			return 0;
		}
}

int main(){
	int var, i, j;
	int arr[10];
	scanf("%d", &var);
	for(i=0; i < var; i++){
		scanISBN(arr);
		if (isValidISBN(arr) == 1){
			for(j= 0; j < 10; j++){
				printf("%d", arr[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
