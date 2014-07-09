#include <stdio.h>

int main(){
	typedef struct planeta{
		char nome[30];
		float d;
		int sat;
	}planet_t;
	float dist;
	
	planet_t venus{"Venus", 0.7}, terra = {"Terra",1,1};
	
	if(venus.d < terra.d){
		dist = terra.d - venus.d;
	}
	else
		dist = venus.d -terra.d;
	
	printf("A distancia pedida e': %f UA", dist);
	
	return 0;
}