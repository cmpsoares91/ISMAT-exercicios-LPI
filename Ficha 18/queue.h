/*************************************************
* Aula Prática de 14 de Junho de LPI - Ficha 18  *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "type.h"

/*
DESCRIÇÃO: Inicializa uma fila com a capacidade n
PRÉ: n > 0;
PÓS: (QUEUEempty() == 1) && (QUEUEfull()==0)
EXCEÇÃO: aborta caso não haja memória
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
void QUEUEinit(int cap);

/*
DESCRIÇÃO: Insere um elemento do tipo q_type_t na fila
PRÉ: QUEUEfull()==0;
PÓS: QUEUEempty() == 0
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
void QUEUEput(q_type_t item);

/*
DESCRIÇÃO: Retorna, retirando, o primeiro elemento na fila
PRÉ: QUEUEempty()==0;
PÓS: QUEUEfull() == 0
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
q_type_t QUEUEget();

/*
DESCRIÇÃO: Retorna 1 se a fila estiver vazia ou 0 caso contrário
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
int QUEUEempty();

/*
DESCRIÇÃO: Retorna 1 se a fila estiver cheia ou 0 caso contrário
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
int QUEUEfull();

/*
DESCRIÇÃO: Liberta o espaço alocado por QUEUEinit()
PRÉ: QUEUEinit() foi chamada && QUEUEkill() não foi chamada
PÓS: O espaço alocado por QUEUEinit() fica livre
Primeira versão: 2012.06.14 por António dos Anjos
email: antoniodosanjos@gmail.com
Alterações:
*/
void QUEUEkill();