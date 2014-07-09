#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n){
	int i;
	printf("\n\nArray Gerado:\n\n%10s | %10s", "Idx", "A[Idx]");
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, *(A+i));
	}
}
void swapArrayContent(int *pa, int n1, int *pb, int n2){
	int temp, i;
	
	for(i=0;((i<n1) || (i<n2));i++){
		if((i<n1)&&(i<n2)){
			temp=*(pa+i);
			*(pa+i)=*(pb+i);
			*(pb+i)=temp;
		}
		else{
			if(n1<n2){
				*(pb+i)='\0';
			}
			else if(n1>n2){
				*(pa+i)='\0';
			}
		}			
	}
	printf("O resultado da troca e':\n\nA primeira array:\n\n");
	printArray(pa, n1);
	printf("\n\nA segunda array:\n\n");
	printArray(pb, n2);
}
int genArray(int n){
	int i, max, min;
	int *array;

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
	
	return *array;
}
int main(){	
	int *arr1={'\0'};
	int *arr2={'\0'};
	int n1, n2;
	
	printf("\nQuantos valores pretende colocar na array: ");
	scanf("%d", &n1);
	arr1=genArray(n1);
	
	printf("\n\n\nQuantos valores pretende colocar na array: ");
	scanf("%d", &n2);
	arr2=genArray(arr2, n2);
	printf("\n\n\n");
	swapArrayContent(arr1, n1, arr2, n2);

	return 0;
}