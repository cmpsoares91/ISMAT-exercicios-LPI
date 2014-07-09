/*************************************************
*  Aula Prática de 31 de Maio de LPI - Ficha 16  *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include "array.h"

array_t * initA(int n){
	array_t * array = (array_t *)malloc(n * sizeof (array_t));
	if(!array){
		fprintf(stderr, "Memory Allocation Error.");
		exit(1);
	}
	
	return array;
}

void freeA(array_t * array){
	free(array);
}

void fillUserA(array_t * array, int n){
	int i;
	
	for(i=0; i<n; i++){
		scanf(PRINTSTR, (array+i));
	}
}

void printA(array_t * array, int n){
	int i;
	
	printf("\n%10s | %10s", "Idx", "A[Idx]");
	
	for(i=0;i<n;i++){
		printf("\n%10d | %10d", i, array[i]);
	}
}

array_t * somaA(array_t * array1, array_t * array2, int n){
	array_t * arraySoma = initA(n);
	int i;
	
	for(i=0; i<n; i++){
		*(arraySoma+i) = *(array1+i) + *(array2+i);
	}
	
	return arraySoma;
}

/*Função auxiliar somente utilizada para o qsort*/
array_t compare (const void * a, const void * b)
{
  return ( *(array_t*)a - *(array_t*)b );
}
/*Função extra pedida pelo professor da mediana...*/
float medianaA(array_t * A, int n){
	
	qsort (A, n, sizeof(array_t), compare);
	
	if(!(n%2)){
		return (((float)*(A+(n/2)) + (float)*(A+(n/2)-1))/2);
	}
	
	return (float)*(A+(n/2));
}