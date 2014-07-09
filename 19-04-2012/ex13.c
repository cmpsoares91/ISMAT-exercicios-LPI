#include <stdio.h>
#include <stdlib.h>

int MDC(int val1, int val2){
	int maior, menor, resto;
	if(val1<val2){
		menor=val1;
		maior=val2;
	}
	else{
		menor=val2;
		maior=val1;
	}
	
	while(maior%menor!=0){
		resto=maior%menor;
		maior=menor;
		menor=resto;
	}

	return menor;
}
int main(){	
	int a=9, b=6, mdc;
	
	mdc=MDC(a, b);
	
	printf("MDC = %d", mdc);
	
	return 0;
}