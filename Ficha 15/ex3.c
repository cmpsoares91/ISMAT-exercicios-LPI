#include <stdio.h>

#define TAM 10

int vect(int n, int A[]){
	if(n==0)
		return 0;
	return (A[n-1]+vect(n-1, A));
}
int main(){
	int n = TAM, A[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("vect(%d) = %d", TAM, vect(n, A));
	
	return 0;
}