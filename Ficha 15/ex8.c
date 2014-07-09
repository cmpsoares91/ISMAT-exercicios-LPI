#include <stdio.h>


typedef char * String;

int subCharString(String str, char c1, char c2){
	if(*str == '\0')
		return 0;
	else if(*str == c1){
		*str = c2;
		return (1 + subCharString(str+1, c1, c2));
	}
	return subCharString(str+1, c1, c2);
}
int main(){
	String A = "Antonio";
	char c1 = 'n', c2 = 'l';
	
	printf("%d\n", subCharString(A, c1, c2));
	
	printf("%s", A);
	
	return 0;
}