#ifndef _CONJUNTO_H
#define _CONJUNTO_H

#include<stdio.h>
#include<stdlib.h>

typedef struct conjunto{
	int elemento;
	struct conjunto * prox;
} Conjunto;

//função para criar um novo conjunto
Conjunto * criaConjunto();

//remoção de um inteiro de um dado conjunto
Conjunto * remover(Conjunto * c, int valor);

//inserção de um inteiro em um dado conjunto
Conunto * insereElemento(Conjunto * c, int valor);

//verifica se o conjunto e vazio
void vazio(Conjunto * c);

//cardinalidade de um conjunto
Conjunto * cardinalidade(Conjunto * c);

//verifica se um dado numero pertence a um conjunto
Conjunto * pertence(Conjunto * c, int valor);

//verifica se um conjunto A é subconjunto de B
void subConjunto(Conjunto * c1, Conjunto * c2);

//operação de diferença entre dois conjuntos
Conjunto * intersecao(Conjunto * c1, Conjunto * c2);

//verificar se um conjunto A é igual a um conjunto B

//realiza a união entre dois conjuntos

//realiza a interseção entre dois conjuntos

#endif
