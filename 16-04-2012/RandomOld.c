#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN -10

int main(){
	int i, j, aux, random[10];
	
	for(i=0;i<10;i++){
		random[i]=rand();
		aux=-random[i];
		random[i]=aux;
		for(j=1;aux<MIN;j++)
			aux=random[i]+(MAX%j);
		random[i]=aux%MAX;
		printf("%d\n",random[i]);
	}

	return 0;
}