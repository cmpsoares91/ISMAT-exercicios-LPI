#include <stdio.h>
#include <stdlib.h>

#define TAM 30

void printArray(int *A, int n){
	int i;
	printf("\n\nArray Gerado:\n\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, *(A+i));
	}
}
void preenche(int n, int *px){
	int i;
	
	for(i=0;i<n;i++,px++){
		*px=i;
	}
}
int main(){	
	int n=TAM, array[TAM];
	
	preenche(n, array);
	printArray(array, n);
	
	return 0;
}