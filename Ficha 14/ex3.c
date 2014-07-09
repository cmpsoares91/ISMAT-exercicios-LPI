#include <stdio.h>

int main(){
	typedef struct hora{
		int h;
		int m;
		int s;
	}ponto_t;
	
	ponto_t h1;
	
	scanf("%d:%d:%d", &h1.h, &h1.m, &h1.s);
	
	printf("(%d:%d:%d)", h1.h, h1.m, h1.s);
	
	return 0;
}