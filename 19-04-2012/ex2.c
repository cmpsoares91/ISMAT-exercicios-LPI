#include <stdio.h>
#include <stdlib.h>

void printArgMain(int argc, char *argv[]){
	int i;
	
	printf("Inseriu %d argumentos\n", argc);
	for(i=0;i<argc;i++){
		printf("%s\n", argv[i]);
	}

}
int main(int argc, char *argv[]){
	
	printArgMain(argc, argv);

	return 0;
}