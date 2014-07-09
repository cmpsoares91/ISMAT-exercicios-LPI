#include <stdio.h>

int main(){
	typedef struct datas{
		int dia;
		int mes;
		int ano;
	}data_t;
	
	data_t d1 = {10,2,2012};
	
	printf("%d/%d/%d", d1.dia, d1.mes, d1.ano);
	
	return 0;
}