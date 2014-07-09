#include <stdio.h>
#include <stdlib.h>

int * genSimpleArray(int n){
	int * array = (int *)malloc(n * sizeof (int));
	if(!array){
		fprintf(stderr, "Memory Allocation Error.");
		exit(1);
	}
	
	return array;
}
void preencherArray(int * A, int n){
	int i;
	
	for(i=0;i<n;i++){
		scanf(" %d", &A[i]);
	}
}
void printArray(int *A, int n){
	int i;
	printf("\n\nArray Gerado:\n\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, A[i]);
	}
}
int main(){
	int * arr1 = 0;
	int n = 20;
	
	arr1 = genSimpleArray(n);
	
	preencherArray(arr1, n);
	
	printArray(arr1, n);
	
	free(arr1);
	
	return 0;
}