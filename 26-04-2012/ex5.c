#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int countChars(char *A){
	int i;

	for(i=0;*A!='\0';i++,A++);
	
	return i;
}
int main(){	
	char str[TAM];
	int strlenght=0;
	
	printf("Introduza a string(max %d car.):", TAM);
	gets(str);
	
	strlenght=countChars(str);
	
	printf("\nA string tem %d caracteres.", strlenght);
	
	return 0;
}