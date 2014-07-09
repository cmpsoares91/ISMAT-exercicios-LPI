#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void formResolvente(){
	float a, b, c, num1, num2, raiz;
	
	printf("Introduza a equacao:\na = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	if(a==0){
		printf("\n\nA equacao anterior nao e' de segundo grau.");
	}
	else{
		printf("(%f)x^2 + (%f)x + (%f) = 0", a, b, c);
		raiz=(b*b-4*a*c);
		if(raiz<0)
			printf("\n\n A equacao anterior nao tem zeros.");
		else if(raiz==0){
			num1=(-b)/(2*a);
			printf("\n\nx = %f\n", num1);
		}
		else{
			raiz=sqrt(raiz);
			num1=(-b-raiz)/(2*a);
			num2=(-b+raiz)/(2*a);
		
			printf("\n\nx = %f or x = %f\n", num1, num2);
		}
	}
}
int main(){	
		
	formResolvente();

	return 0;
}