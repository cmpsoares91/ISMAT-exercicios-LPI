#include <stdio.h>

int main(){
	typedef struct planeta{
		char nome[30];
		float d;
		int sat;
	}planet_t;
	
	planet_t saturno{"Saturno"}, terra = {"Terra",1,1};
	
	printf("nome: %s\tdistancia: %f UA\tsatelites: %d", terra.nome, terra.d, terra.sat);
	
	return 0;
}