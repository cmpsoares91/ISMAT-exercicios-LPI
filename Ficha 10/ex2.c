#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
	char string[TAM];
	int count;
	FILE* fp = fopen("Fexerc1.txt", "r");
	
	if(!fp){
		printf("Error");
		exit(1);
	}
	
	fgets(string, TAM, fp);
	printf("%s\n", string);
	
	for(count=0;string[count]!='\n' && string[count]!='\0' && string[count]!=-1;count++);
	
	fclose(fp);
	
	printf("O ficheiro tem %d caracteres", count);

	return 0;
}