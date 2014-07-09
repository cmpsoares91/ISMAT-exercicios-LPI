#include <stdio.h>
#include <stdlib.h>
/*#include <time.h>*/

#define TAM 11

void swap(int A[], int i, int Idx){
	int temp;
	
	temp=A[i];
	A[i]=A[Idx];
	A[Idx]=temp;

}
void SelectionSortMin(int A[], int n){
	int i, j, Idx;
	
	for(i=0;i<n-1;i++){
		Idx=i;
		for(j=i+1;j<n;j++){
			if(A[j]<A[Idx])
				Idx=j;
		}
		swap(A, i, Idx);
	}
}
void SelectionSortMax(int A[], int n){
	int i, j, Idx;
	
	for(i=0;i<n-1;i++){
		Idx=i;
		for(j=i+1;j<=n-1;j++){
			if(A[j]>A[Idx])
				Idx=j;
		}
		swap(A, i, Idx);
	}
}
void printArray(int A[], int n){
	int i;
	printf("\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, A[i]);
	}
}
void gerarArray(int n, int max, int min){
	int i;
	int *array;
	
	srand(time(0));
	
	array = (int *)malloc(n * sizeof (*array));
	if(!array)
		printf("Memory Allocation Error.");
	else{
		for(i=0;i<n;i++){
			array[i]=((rand()%(max-min))+min);
		}
		printArray(array, n);
	}
}
void reGerarArray(int *array ,int n, int max, int min){/*Não está funcional*/
	int i;

	printf("n novo e' igual a:");
	scanf("%d", &n);
	array = realloc(array, n);
	if(!array)
		printf("Realocation Error.");
	else{
		for(i=0;i<n;i++){
			array[i]=((rand()%((max-min)+1))+min);
		}
		printArray(array, n);
	}
}
int main(){
	/*int A[TAM]={1,2,4,67,4,3,2,5,7,5,9};*/
	int n=TAM, max=3, min=0;

	/*
	printf("Array original:");
	printArray(A, n);
	
	SelectionSortMin(A, n);
	printf("\n\nOrdenar array do minimo para o maximo:");
	printArray(A, n);

	SelectionSortMax(A, n);
	printf("\n\nOrdenar array do maximo para o minimo:");
	printArray(A, n);*/
	
	gerarArray(n, max, min);
	printf("\n\n");
	/*reGerarArray(A, n, max, min);*/
	
	return 0;
}