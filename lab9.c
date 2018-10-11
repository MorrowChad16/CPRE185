// Lab 9 DS4Talker Skeleton Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXWORDS 100
#define WORDLEN 11
#define DEBUG 1   // set to 0 to disable debug output

// reads words from the file
// into wl and trims the whitespace off of the end
// DO NOT MODIFY THIS PROTOTYPE
int readWords(char* wl[MAXWORDS], char* filename); 

//modifies s to trim white space off the right side
// DO NOT MODIFY THIS PROTOTYPE
void trimws(char* s);

int main(int argc, char* argv[]) {
	char* wordlist[MAXWORDS];
	int wordCount;
	int i;
	wordCount = readWords(wordlist, argv[1]);

	if (DEBUG) {
		printf("Read %d words from %s \n",wordCount, argv[1]);
		for (i = 0; i< wordCount; i++) {
			printf("%s,", wordlist[i]);
			}
		printf("\n");
		}

// Your code goes here. Don't forget to include the ncurses library 

    return 0;
	}

// Modify this function so it trims the white space 
// off the right side of string s
void trimws(char* s){
	int i = strlen(s-1);
	while(i>-1){
		if(!isspace(s[i]))
	
		i = -10;
		else
			s[i]='\0';
		i--;
	}
}


// Modify this function so it reads words from the file
// into wl and trims the whitespace off of the end
int readWords(char* wl[MAXWORDS], char* filename) {\
	int i=0;
	int	j=0;
	FILE *inFile = fopen(filename, "r");
	char* file;
	while(!feof(inFile)){
		fgets(file, WORDLEN, filename);
		filename = (char*)malloc(WORDLEN * sizeof(char));
		trimws(filename);
		wl[i] = filename;
		if(strlen(filename)==0){
			i--;
			j--;
		}
		i++;
		j++;
	}
	fclose(inFile);
	return 0;
}
