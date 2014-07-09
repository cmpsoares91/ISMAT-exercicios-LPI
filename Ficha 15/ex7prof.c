#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void printArray(int A[], int n){
	if(n > 0){
		printf("A[%d] = %d;\n", (n-1), *A);
		printArray(A+1, n-1);
	}
}
void printArrayInvert(int A[], int n){
	if(n > 0){
		printArray(A+1, n-1);
		printf("A[%d] = %d;\n", (n-1), *A);
	}
}
void preencheArray(int A[]){
	int i, min = -TAM, max = TAM;
	
	srand(time(0));
	
	for(i=0;i<TAM;i++){
			A[i]=((rand()%(max-min+1))+min);
		}
}
int main(){
	int A[TAM], n = TAM;
	
	preencheArray(A);
	printArray(A, n);
	printf("\n");
	printArrayInvert(A, n);
	
	return 0;
}