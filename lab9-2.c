// Lab 9 DS4Talker Skeleton Code

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <ncurses/ncurses.h>
#define MAXWORDS 100
#define WORDLEN 11
#define AVATAR '<'
#define DEBUG 0

int readWords(char* wl[MAXWORDS], char* filename); 

void trimws(char* s);

void draw_character(int x, int y, char use);

int main(int argc, char* argv[]) {
	initScr();
	refresh();
	char* wordlist[MAXWORDS];
	int wordCount;
	int i=0;
	int j=0;
	int t, b1, b2, b3, b4, leftUP, leftDOWN, rightUP, rightDOWN;
	wordCount = readWords(wordlist, argv[1]);
	scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4, &leftUP, &leftDOWN, &rightUP, &rightDOWN);
	
	if (DEBUG) {
		printf("Read %d words from %s \n",wordCount, argv[1]);
		for (i = 0; i< wordCount; i++) {
			printf("%s,", wordlist[i]);
			}
		printf("\n");
		}
		
	for(i=0; i<5; i++){
		for(j=0; j<wordlist; j++){ 
		mvprintw(j, i, "%15s", wordslist[j]);
		}
	}
	
	if(time-t0>=500){
			t0 = time;
			mvaddch(y, x, ' ');
		else
			printf("%c", '<');
	}
	
	if(b3==1){
		mvprintw(0, 0, "%15s", wordslist[0]);
	}
	
	endwin();
    return 0;
	}
	
void draw_character(int x, int y, char use){
	int i, j;
	for(i=0; i<NUMCOLS; i++){
		for(j=0; j<NUMROWS; j++){
			mvaddch(i, j, AVATAR);
		}
	}
}


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


int readWords(char* wl[MAXWORDS], char* filename) {
	int i=0;
	int	j=0;
	FILE *inFile = fopen(filename, "r");
	while(!feof(inFile)){
		fscanf(inFile, "%s", &filename);
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
	return j;
}
