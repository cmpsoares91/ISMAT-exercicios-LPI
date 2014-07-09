#include <stdio.h>
#include <stdlib.h>

void printArray(int A[], int n){
	int i;
	printf("\n\nArray Gerado:\n\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, A[i]);
	}
}
void swapArrayContent(int *pa, int *pb){
	int temp;
	printf("antes");
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	printf("depois");
}
int genArray(int *array){
	int i, n, max, min;
	
	printf("Quantos valores pretende colocar na array: ");
	scanf("%d", &n);
	printf("Qual e' o maximo dos valores gerados: ");
	scanf("%d", &max);
	printf("Qual e' o minimo dos valores  gerados: ");
	scanf("%d", &min);

	array = (int *)malloc(n * sizeof (*array));
	if(!array)
		printf("Memory Allocation Error.");
	else{
		for(i=0;i<n;i++){
			array[i]=((rand()%(max-min))+min);
		}
		printArray(array, n);
	}
	
	return n;
}
int main(){	
	int *arr1={'\0'};
	int *arr2={'\0'};
	int n1, n2;
	
	printf("\n");
	n1=genArray(arr1);
	printf("\n\n\n");
	n2=genArray(arr2);
	printf("\n\n\n");
	swapArrayContent(arr1, arr2);

	printf("O resultado da troca e':\n\nA primeira array:\n\n");
	printArray(arr1, n2);
	printf("\n\nA segunda array:\n\n");
	printArray(arr2, n1);
	
	return 0;
}