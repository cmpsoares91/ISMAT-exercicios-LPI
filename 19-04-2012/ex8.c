#include <stdio.h>
#include <stdlib.h>

void numTriangular(int n){
	int num;
	
	printf("\n\n");
	if(n>0){
		num=(n*(n+1))/2;
		printf("T(%d) = %d\n", n, num);
	}
	else
		printf("Error: n tem que ser maior que 0.\n");
}
int main(){
	int n;
	
	printf("Introduza qual o numero (n) triangular quer gerar:\nn = ");
	scanf("%d", &n);
	
	numTriangular(n);

	return 0;
}