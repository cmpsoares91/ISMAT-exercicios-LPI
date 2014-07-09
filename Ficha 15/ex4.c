#include <stdio.h>

#define TAM 10
typedef char * String;

int count(String str){
	if(*str == '\0')
		return 0;
	return (1+count(str+1));
}
int ePal(int i, int n, String str){
	if(n <= 1)
		return 1;
	else if(str[i-n]==str[n-1])
		return (ePal(i, n-1, str));
	return 0;
}
int main(){
	int n, i = 0;
	String A = "amor a roma";
	
	i = n = count(A);
	printf("%d\n\n", i);
	printf("%d", ePal(i, n, A));
	
	return 0;
}