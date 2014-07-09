#include <stdio.h>

int main(){
	struct coords{
		float x;
		float y;
	}
	
	struct coords c;
	
	scanf("%f,%f", &c.x, &c.y);
	
	printf("(%f, %f)", c.x, c.y);
	
	return 0;
}