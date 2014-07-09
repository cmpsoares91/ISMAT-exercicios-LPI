#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int countChars(char *A){
	int i;

	for(i=0;*A!='\0';i++,A++);
	
	return i;
}
int compareArray(char *str1, char *str2){
	int i, n1, n2, flag=0;
	
	n1=countChars(str1);
	n2=countChars(str2);
	
	if(n1==n2){
		for(i=0;i<n1;i++){
			if(*(str1+i)!=*(str2+i)){
				flag=-1;
				break;
			}
		}
	}
	else{
		flag=-1;
	}
	return flag;
}
int main(){	
	char str1[TAM]={}, str2[TAM]={};
	int f;
	
	printf("Introduza a primeira string(max %d car.):", TAM);
	gets(str1);
	
	printf("Introduza a segunda string(max %d car.):", TAM);
	gets(str2);
	
	
	f=compareArray(str1, str2);
	
	printf("%d", f);
	
	return 0;
}