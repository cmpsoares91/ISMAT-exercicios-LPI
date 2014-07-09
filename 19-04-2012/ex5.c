#include <stdio.h>
#include <stdlib.h>

void printValorMaior(float v1, float v2){
	
	if(v1>v2)
		printf("\n\nO maior valor e' %f", v1);
	else if(v1==v2)
		printf("\n\nOs valores sao iguais.");
	else
		printf("\n\nO maior valor e' %f", v2);

}
int main(){
	float valor1, valor2;
	
	printf("Introduza o 1o valor: ");
	scanf("%f", &valor1);
	printf("Introduza o 2o valor: ");
	scanf("%f", &valor2);
	
	printValorMaior(valor1, valor2);

	return 0;
}