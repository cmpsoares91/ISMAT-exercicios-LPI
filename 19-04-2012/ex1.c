#include <stdio.h>
#include <stdlib.h>

float zeroFunction(float a, float b){
	float x;
	
	if(a==0){
		printf("Nao e' uma equacao do primeiro grau");
		exit(0);
	}
	x=b/a;
	
	return x;
}
int main(){
	float x;

	x=zeroFunction(5, 2);
	
	printf("O zero da equacao e': %f", x);

	return 0;
}