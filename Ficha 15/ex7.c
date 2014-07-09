#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void printArray(int A[], int n){
	if(n != 0){
		printf("A[%d] = %d;\n", (TAM-n), A[TAM-n]);
		printArray(A, --n);
	}
}
void printArrayInvert(int A[], int n){
	if(n != TAM){
		printf("A[%d] = %d;\n", (TAM-n-1), A[TAM-n-1]);
		printArrayInvert(A, (n+1));
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
	n = 0;
	printArrayInvert(A, n);
	
	return 0;
}