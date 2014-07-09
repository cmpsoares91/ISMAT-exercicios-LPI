#include <stdio.h>

typedef char * String;

int tamString(String str){
	if(*str == '\0')
		return 0;
	return (1 + tamString(str+1));
}
int main(){
	String A = "amor a roma";
	
	printf("%d", tamString(A));
	
	return 0;
}