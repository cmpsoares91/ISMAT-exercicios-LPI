/*************************************************
*  Aula Prática de 31 de Maio de LPI - Ficha 16  *
**************************************************
* Autor:              Carlos Soares, nº 21103408 *
* Professor:            Doutor António dos Anjos *
* Curso:                        Eng. Informática *
* Universidade:             ISMAT, Portimão 2012 *
*************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "type.h"

/*
DESCRIÇÃO: Aloca n espaços consecutivos em memória do tipo type e devolve
um apontador para o primeiro
PRÉ: n > 0
PÓS: array != 0
EXCEÇÃO: aborta caso não haja memória suficiente
*/
array_t * initA(int n);

/*
DESCRIÇÃO: Liberta o espaço em memória apontado por array
PRÉ: array != 0
PÓS: a memória anteriormente apontada por array fica livre
*/
void freeA(array_t * array);

/*
DESCRIÇÃO: Preenche o array com n elementos solicitados ao utilizador
PRÉ: array != 0 && 0 < n <= size(array)
PÓS: array vai conter os valores introduzidos pelo utilizador
*/
void fillUserA(array_t * array, int n);

/*
DESCRIÇÃO: Mostra os primeiros n elementos no array
PRÉ: array != 0 && 0 < n <= size(array)
*/
void printA(array_t * array, int n);

/*
DESCRIÇÃO: Devolve um novo array com a soma dos valores do array1 com array2 (ex.: arraySoma[0] = array1[0] + array2[0])
PRÉ: array1 != 0 && array2 != 0 && size(array1) == size(array2) == n
PÓS: arraySoma != 0
*/
array_t * somaA(array_t * array1, array_t * array2, int n);

/*
DESCRIÇÃO: Devolve o valor da mediana do array
PRÉ: n > 0 && array != 0 && size(array) == n
PÓS: valor da mediana do array(float)
*/
float medianaA(array_t * A, int n);

