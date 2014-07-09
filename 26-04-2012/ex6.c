#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int countChars(char *A){
	int i;

	for(i=0;*A!='\0';i++,A++);
	
	return i;
}
void printInvertString(char *string, int n){
	int i;
	
	for(i=1;i<=n;i++){
		printf("%c", *(string+n-i));
	}
}
int main(){	
	char str[TAM];
	int n;
	
	printf("Introduza a string(max %d car.):", TAM);
	gets(str);
	n=countChars(str);
	printf("\nA string tem %d caracteres.", n);
	
	printInvertString(str, n);

	
	return 0;
}