#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30

void printChars(char *A, int n){
	int i;

	for(i=0;*A!='\0';i++,A++){
		printf("\n%10d | %10c", i, *A);
	}
}
int main(){	
	int n=TAM;
	char array[TAM];
	
	printf("Introduza a string(max 30 car.):");
	gets(array);
	
	printChars(array, n);
	
	return 0;
}