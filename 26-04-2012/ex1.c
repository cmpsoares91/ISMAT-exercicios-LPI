#include <stdio.h>
#include <stdlib.h>


void swapContent(int *p1, int *p2){
	int temp;
	
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main(){	
	int x=10, y=55;
	
	swapContent(&x, &y);
	
	printf("x = %d\n\ny = %d", x, y);
	
	return 0;
}