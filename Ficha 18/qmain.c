#include "queue.h"

int main(){
	QUEUEinit(5);
	
	printf("Empty? %d\n", QUEUEempty());
	printf("Full? %d\n", QUEUEfull());
	
	QUEUEput(1);
	QUEUEput(2);
	QUEUEput(3);
	QUEUEput(4);
	QUEUEput(5);
	
	printf("Empty? %d\n", QUEUEempty());
	printf("Full? %d\n", QUEUEfull());
	
	printf(PRINT, QUEUEget());
	printf("\n");
	printf(PRINT, QUEUEget());
	printf("\n");
	printf(PRINT, QUEUEget());
	printf("\n");
	printf(PRINT, QUEUEget());
	printf("\n");
	printf(PRINT, QUEUEget());
	printf("\n");
	
	printf("Empty? %d\n", QUEUEempty());
	printf("Full? %d\n", QUEUEfull());
	
	QUEUEkill();

	return 0;
}