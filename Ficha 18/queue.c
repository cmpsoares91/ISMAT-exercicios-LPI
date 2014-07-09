/*************************************************
* Aula Prática de 14 de Junho de LPI - Ficha 18  *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include "type.h"
#include "queue.h"

q_type_t * queue = 0;
static int cap;
static int in = 0;
static int out = 0;

static int next(int i){
	if(i<cap){
		return ++i;
	}
	return (i-cap);
}

void QUEUEinit(int c){
	queue = (q_type_t *)malloc((c+1) * sizeof(q_type_t));
	if(!queue){
		fprintf(stderr, "Memory Allocation Error.");
		exit(1);
	}
	
	cap = c;
}

void QUEUEput(q_type_t item){
	*(queue+in) = item;
	in = next(in);
}

q_type_t QUEUEget(){
	q_type_t temp;
	
	temp = *(queue+out);
	out = next(out);
	
	return temp;
}

int QUEUEempty(){
	if(in == out)
		return 1;
	return 0;
}

int QUEUEfull(){
	if(next(in)==out)
		return 1;
	return 0;
}

void QUEUEkill(){
	free(queue);
}