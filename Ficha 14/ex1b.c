#include <stdio.h>

int main(){
	typedef struct coords{
		float x;
		float y;
	}ponto_t;
	
	ponto_t c;
	
	scanf("%f,%f", &c.x, &c.y);
	
	printf("(%f, %f)", c.x, c.y);
	
	return 0;
}