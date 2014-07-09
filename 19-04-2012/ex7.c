#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	int i, temp=0, fib0=0, fib1=1;
	
	if(n==0||n==1)
		return n;
	
	if(n>0){
		for(i=1;i<n;i++){
			temp=fib0+fib1;
			fib0=fib1;
			fib1=temp;
		}
	}

	return temp;
}
int main(){
	int n, fib;
	
	printf("Introduza qual o numero (n) de fibonacci quer gerar:\nn = ");
	scanf("%d", &n);
	
	fib=fibonacci(n);
	printf("\nfib(%d) = %d", n, fib);

	return 0;
}