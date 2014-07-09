#include <stdio.h>

#define TAM 10
typedef char * String;

int eCansi(String str){
	if(*str == '\0')
		return 0;
	return (*str + eCansi(str+1));
}
int main(){
	String A = "amor a roma";
	
	printf("%d", eCansi(A));
	
	return 0;
}