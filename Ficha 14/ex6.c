#include <stdio.h>
#include <string.h>

int main(){
	enum sex {f, m};
	enum estciv {solteiro, casado, viuvo, divorciado};
	struct datanas{
			int dia;
			int mes;
			int ano;
		};
	typedef struct id{
		char nome[50];
		int idade;
		struct datanas data;
		enum sex s;
		enum estciv e;
	}id_t; /*id_t pessoa = {"nome", idade, {dd,mm,aaaa}, f ou m, estado civil};*/
	char sexo[15] = "Feminino";
	char estado[15] = "Solteiro";
	
	id_t carlos = {"Carlos", 20, {19,07,1991}, m, solteiro};
	
	if(carlos.s == 1)
		strcpy(sexo, "Masculino");
	if(carlos.e == 1)
		strcpy(estado, "Casado");
	if(carlos.e == 2)
		strcpy(estado, "Viuvo");
	if(carlos.e == 3)
		strcpy(estado, "Divorciado");
		
	
	printf("%s, %d, %d/%d/%d, %s, %s", carlos.nome, carlos.idade, carlos.data.dia, carlos.data.mes, carlos.data.ano, sexo, estado);
	
	return 0;
}