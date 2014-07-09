#include <stdio.h>
#include <stdlib.h>

#ifndef _ARRAY_TYPE_
	#define _ARRAY_TYPE_
	typedef char array_t;
	#define PRINT "%s"
	#define MAX 500
#endif

array_t * genSimpleArray(int n){
	array_t * array = (array_t *)malloc(n * sizeof (array_t));
	if(!array){
		fprintf(stderr, "Memory Allocation Error.");
		exit(1);
	}
	
	return array;
}
int strlenght(array_t * A){
	int count;
	
	for(count = 0; *A != '\0'; A++, count++);

	return count;
}
array_t * strcat(array_t * arr1, array_t * arr2){
	int i, i1, n = 0;
	array_t * arr = 0;
	
	n = i1 = strlenght(arr1)-1;
	n += strlenght(arr2)-1;
	
	arr = genSimpleArray(n);
	
	for(i=0; i < n; i++){
		if(i < i1){
			*(arr+i) = *(arr1+i);
		}
		else{
			*(arr+i) = *(arr2+i-i1);
		}
	}
	
	*(arr+n) = '\0';
	
	return arr;
}
int main(){
	array_t * arr1 = 0;
	array_t * arr2 = 0;
	array_t * arrR = 0;
	
	arr1 = genSimpleArray(MAX);
	arr2 = genSimpleArray(MAX);
	
	printf("Introduza os arrays: \n\n");
	fgets(arr1, MAX, stdin);
	fgets(arr2, MAX, stdin);
	
	arrR = strcat(arr1, arr2);
	
	fprintf(stdout, PRINT, arrR);
	
	free(arr1);
	free(arr2);
	free(arrR);
	
	
	return 0;
}