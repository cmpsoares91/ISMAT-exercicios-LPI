#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main(){
	char string[TAM];
	FILE* fp = fopen("Fexerc1.txt", "w");
	
	if(!fp){
		printf("Error");
		exit(1);
	}
	
	scanf("%s", string);
	
	fputs(string, fp);
	
	fclose(fp);

	return 0;
}