#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	int A[TAM]={1,2,4,67,4,3,2,5,7,5};
	int n=TAM;

	return 0;
}
SelectionSortMin(int A[], int n){
	int i, j;
	
	for(i=0;i<n;i++){
		minIdx=i;
		for(j=i+1;j<=n;j++){
			if(A[j]<A[minIdx])
				minIdx=j;
		}
		swap(A, i, minIdx);
	}
	
	return 0;
}
SelectionSortMax(int A[], int n){
	int i, j, maxIdx;
	
	for(i=0;i<n;i++){
		maxIdx=i;
		for(j=i+1;j<=n;j++){
			if(A[j]>A[maxIdx])
				maxIdx=j;
		}
		swap(A, i, maxIdx);
	}
	
	return 0;
}
Swap(int A[], int i, int Idx){
	int temp;
	
	temp=A[i];
	A[i]=A[Idx];
	A[Idx]=temp;
	
	return 0;
}