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
int main(){
	int * arr1 = 0;
	int n = 20;
	
	arr1 = genSimpleArray(n);
	
	free(arr1);
	
	return 0;
}