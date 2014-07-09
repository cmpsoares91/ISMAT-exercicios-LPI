#include <stdio.h>
#include <stdlib.h>
#include <float.h>


void compararMaior(int n){
	float *valores;
	float temp=FLT_MIN;
	int i;
	
	valores = (float *)malloc(n * sizeof (*valores));
	if(!valores)
		printf("Memory Allocation Error.");
	else{
		for(i=0;i<n;i++){
			printf("Introduza %do valor: ", i+1);
			scanf("%f", &valores[i]);
			if(temp<valores[i])
				temp=valores[i];
		}
		printf("O maior valor e': %f", temp);
	}
	

}
int main(){
	int n;
	
	printf("Introduza o numero de valores diferentes que quer comparar: ");
	scanf("%d", &n);
	
	compararMaior(n);

	return 0;
}