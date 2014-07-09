#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

/* static para serem visíveis apenas aqui */
static s_type_t * pStack = 0; /* apontador para o array de suporte à stack */
static int capacity; /* capacidade da stack */
static int actSize; /* tamanho atual da stack */


/*
DESCRIÇÃO: Inicializa uma stack com a capacidade n
PRÉ: n > 0;
PÓS: (STACKempty() == 1) && (STACKfull()==0)
EXCEÇÃO: aborta caso não haja memória

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
void STACKinit(int n){
	pStack = (s_type_t *) malloc(n*sizeof(*pStack));
	if (!pStack){
		fprintf(stdout, "Erro de alocação de memória\n");
		exit(1);
	}

	capacity = n;
	actSize = 0;
}

/*
DESCRIÇÃO: Devolve 1 se a stack estiver vazia, ou zero caso contrário

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
int STACKempty(void){
	return !actSize;
}


/*
DESCRIÇÃO: Devolve 1 se a stack estiver cheia, ou zero caso contrário

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
int STACKfull(void){
	return (actSize == capacity);
}

/*
DESCRIÇÃO: Retorna e retira o último elemento inserido na stack
PRÉ: STACKempty() == 0
PÓS: STACKfull()== 0

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
s_type_t STACKpop(void){
	return pStack[--actSize]; /* primeiro decrementa, depois utiliza */
}

/*
DESCRIÇÃO: Retorna o último elemento inserido na stack, sem modificar o estado da stack
PRÉ: STACKempty() == 0
PÓS: STACK == old STACK (onde STACK representa o estado da stack)

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
s_type_t STACKtop(void){
	return pStack[actSize-1];
}

/*
DESCRIÇÃO: Insere um elemento do tipo s_type_t na stack
PRÉ: STACKfull() == 0
PÓS: (STACKempty()== 0) && (item == STACKtop())

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
void STACKpush(s_type_t item){
	pStack[actSize++]=item; /* primeiro utiliza, depois incrementa */
}

/*
DESCRIÇÃO: Liberta o espaço alocado por STACKinit()
PRÉ: STACKinit() foi chamada && STACKkill() não foi chamada
PÓS: O espaço alocado por STACKinit fica livre

  Primeira versão:	2012.06.03 por António dos Anjos
			email: antoniodosanjos@gmail.com
  Alterações:
*/
void STACKkill(void){
	free(pStack);
}


/* utilizada em tempo de debug */
void STACKprint(){
	int i=0;
	for (i=0; i <actSize; i++){
		fprintf(stdout, "Stack:\n");
		fprintf(stdout, sPrintStr, pStack[i]);
		fprintf(stdout, "\n");
	 }
}
