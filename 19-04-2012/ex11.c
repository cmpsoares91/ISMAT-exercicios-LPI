#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int *A, int n){
	int i;
	printf("\n\nArray Gerado:\n\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, *(A+i));
	}
}
int * genArray(int n){
	int i, max, min;
	int *array;

	srand(time(0));
	
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
	}
	
	return array;
}
void cutValue(int arr[], int n, int x){
	int i;
	
	for(i=0;i<n;i++){
		if(arr[i]==x){
			arr[i]=0;
		}
	}
}
int main(){	
	int *arr1={'\0'};
	int n1, valor;
	
	printf("Quantos valores pretende colocar na array: ");
	scanf("%d", &n1);
	arr1=genArray(n1);
	printArray(arr1, n1);
	
	printf("Qual o valor que quer colocar a zero: ");
	scanf("%d", &valor);
	
	cutValue(arr1, n1, valor);
	printArray(arr1, n1);
	
	return 0;
}