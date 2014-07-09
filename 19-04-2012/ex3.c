#include <stdio.h>
#include <stdlib.h>

void printSomaFloat(int argc, char *argv[]){
	int i;
	float sum=0, temp;
	
	printf("Inseriu %d valores:\n", argc-1);
	for(i=1;i<argc;i++){
		temp=sum;
		if(i==argc-1)
			printf("%s = ", argv[i]);
		else
			printf("%s + ", argv[i]);
		sum=temp+atof(argv[i]);
	}
	printf("%f", sum);

}
int main(int argc, char *argv[]){
	
	printSomaFloat(argc, argv);

	return 0;
}