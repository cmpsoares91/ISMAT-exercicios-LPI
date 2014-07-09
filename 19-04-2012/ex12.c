#include <stdio.h>
#include <stdlib.h>

void MDC(int val1, int val2){
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

	printf("MDC = %d", menor);
}
int main(){	
	int a=9, b=6;
	
	MDC(a, b);
	
	return 0;
}