/*************************************************
*  Aula Pr�tica de 31 de Maio de LPI - Ficha 16  *
**************************************************
* Autor:              Carlos Soares, n� 21103408 *
* Professor:            Doutor Ant�nio dos Anjos *
* Curso:                        Eng. Inform�tica *
* Universidade:             ISMAT, Portim�o 2012 *
*************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "type.h"

/*
DESCRI��O: Aloca n espa�os consecutivos em mem�ria do tipo type e devolve
um apontador para o primeiro
PR�: n > 0
P�S: array != 0
EXCE��O: aborta caso n�o haja mem�ria suficiente
*/
array_t * initA(int n);

/*
DESCRI��O: Liberta o espa�o em mem�ria apontado por array
PR�: array != 0
P�S: a mem�ria anteriormente apontada por array fica livre
*/
void freeA(array_t * array);

/*
DESCRI��O: Preenche o array com n elementos solicitados ao utilizador
PR�: array != 0 && 0 < n <= size(array)
P�S: array vai conter os valores introduzidos pelo utilizador
*/
void fillUserA(array_t * array, int n);

/*
DESCRI��O: Mostra os primeiros n elementos no array
PR�: array != 0 && 0 < n <= size(array)
*/
void printA(array_t * array, int n);

/*
DESCRI��O: Devolve um novo array com a soma dos valores do array1 com array2 (ex.: arraySoma[0] = array1[0] + array2[0])
PR�: array1 != 0 && array2 != 0 && size(array1) == size(array2) == n
P�S: arraySoma != 0
*/
array_t * somaA(array_t * array1, array_t * array2, int n);

/*
DESCRI��O: Devolve o valor da mediana do array
PR�: n > 0 && array != 0 && size(array) == n
P�S: valor da mediana do array(float)
*/
float medianaA(array_t * A, int n);

