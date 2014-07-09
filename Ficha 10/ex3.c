#include <stdio.h>
#include <stdlib.h>

#define TAM 1000

int main(){
	char string[TAM]={};
	int i=0;
	FILE* fp = fopen("ex1.c", "r");
	
	if(!fp){
		printf("Error");
		exit(1);
	}
	while(i<TAM){
	string[i]=fgetc(fp);
	i++;
	if(string[i-1]=='\0')
		break;
	}
	string[i]='\0';
	
	puts(string);

	fclose(fp);

	return 0;
}