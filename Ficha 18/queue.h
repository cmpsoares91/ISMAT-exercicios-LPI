/*************************************************
* Aula Pr�tica de 14 de Junho de LPI - Ficha 18  *
**************************************************
* Autor:              Carlos Soares, n� 21103408 *
* Professor:            Doutor Ant�nio dos Anjos *
* Curso:                        Eng. Inform�tica *
* Universidade:             ISMAT, Portim�o 2012 *
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "type.h"

/*
DESCRI��O: Inicializa uma fila com a capacidade n
PR�: n > 0;
P�S: (QUEUEempty() == 1) && (QUEUEfull()==0)
EXCE��O: aborta caso n�o haja mem�ria
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
void QUEUEinit(int cap);

/*
DESCRI��O: Insere um elemento do tipo q_type_t na fila
PR�: QUEUEfull()==0;
P�S: QUEUEempty() == 0
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
void QUEUEput(q_type_t item);

/*
DESCRI��O: Retorna, retirando, o primeiro elemento na fila
PR�: QUEUEempty()==0;
P�S: QUEUEfull() == 0
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
q_type_t QUEUEget();

/*
DESCRI��O: Retorna 1 se a fila estiver vazia ou 0 caso contr�rio
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
int QUEUEempty();

/*
DESCRI��O: Retorna 1 se a fila estiver cheia ou 0 caso contr�rio
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
int QUEUEfull();

/*
DESCRI��O: Liberta o espa�o alocado por QUEUEinit()
PR�: QUEUEinit() foi chamada && QUEUEkill() n�o foi chamada
P�S: O espa�o alocado por QUEUEinit() fica livre
Primeira vers�o: 2012.06.14 por Ant�nio dos Anjos
email: antoniodosanjos@gmail.com
Altera��es:
*/
void QUEUEkill();