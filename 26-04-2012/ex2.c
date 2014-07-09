#include <stdio.h>
#include <stdlib.h>


FILE * abreFicheiro(char * file){
	FILE * fp = fopen(file, "r");
	if(!fp){
		printf("\n\nNao foi possivel abrir o ficheiro.");
	}
	else{
		printf("\n\nFoi aberto com sucesso o ficheiro %s.\n\n\n", file);
	}
	
	return fp;
}
int main(){	
	char nomeFicheiro[30];
	FILE * fich;
	
	printf("Introduza qual o nome do ficheiro: ");
	scanf("%s",nomeFicheiro);
	fich=abreFicheiro(nomeFicheiro);
	
	fclose(fich);
	
	return 0;
}