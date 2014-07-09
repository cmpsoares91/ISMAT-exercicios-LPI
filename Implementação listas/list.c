/*************************************************
* Aula Prática de 31 de Maio - ALG - Linked List *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef char ll_type_t;

typedef struct node * llist;

struct node{
	ll_type_t item;
	llist next;
};

void displayList(llist l){
	llist pl = 0;
	
	for(pl=l; pl!=0; pl=pl->next){
		fprintf(stdout, "%c -> ", pl->item);
	}
	fprintf(stdout, "NULL\n");
}

int main(){
	llist l = 0;
	
	llist no1 = (llist)malloc(sizeof(*no1));
	if(!no1){
		fprintf(stderr, "Memory Allocation Error!\n");
		exit(1);
	}
	
	llist no2 = (llist)malloc(sizeof(*no2));
	if(!no2){
		free(no1);
		fprintf(stderr, "Memory Allocation Error!\n");
		exit(1);
	}
	
	no1->item = '3'; /* ou (*no1).item = '3'; */
	no1->next = no2;
	
	no2->item = '1';
	no2->next = 0; /* NULL */
	
	l = no1;

	displayList(l);

	free(no1);
	free(no2);
	
	return 0;
}