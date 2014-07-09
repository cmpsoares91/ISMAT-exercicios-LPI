/*************************************************
*  Aula Prática de 31 de Maio de LPI - Ficha 16  *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include "array.h"

int main(){
	int n;
	array_t * arrayA = 0;
	array_t * arrayB = 0;
	array_t * arrayC = 0;
	
	do{
	fprintf(stdout, "Quanto elementos: ");
	fscanf(stdin, "%d", &n);
	} while (n < 1);
	
	arrayA = initA(n);
	arrayB = initA(n);
	
	fprintf(stdout, "Introduza os elementos, p.f.\n");
	fillUserA(arrayA, n);
	fprintf(stdout, "Introduza os elementos, p.f.\n");
	fillUserA(arrayB, n);
	
	arrayC = somaA(arrayA, arrayB, n);
	
	fprintf(stdout, "Resultado:\n");
	printA(arrayC, n);
	
	fprintf(stdout, "\nMedia = %.02f\n", medianaA(arrayC, n));
	
	freeA(arrayA);
	freeA(arrayB);
	freeA(arrayC);
	
	return 0;
}