#include <stdio.h>
#include <stdlib.h>

void printValorAbsoluto(float valor){
	
	if(valor<0)
		valor=-valor;
	printf("\n\nO valor absoluto e' %f", valor);

}
int main(){
	float valor;
	
	printf("Introduza o valor: ");
	scanf("%f", &valor);
	
	printValorAbsoluto(valor);

	return 0;
}