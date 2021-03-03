//TAD PARA OPERAÇÕES BÁSICAS EM CONJUNTOS DE NÚMEROS INTEIROS

#include "conjunto.h"

//declarando a estrutura para um conjunto qualquer
typedef struct conjunto{
	int elemento;
	struct conjunto * prox;
} Conjunto;

//criando um conjunto vazio
Conjunto * criaConjunto(){
	return NULL;
}

//inserir um elemento em um conjunto
Conjunto * insereELemento(Conjunto * c, int valor){
	Conjunto * novo = (Conjunto *) calloc(1, sizeof(Conjunto));
	novo->elemento = elemento;
	novo->prox = c;
	return novo;
}

//função para remover um elemento de um dado conjunto
Conjunto * remover(Conjunto * c, int valor){
	Conjunto * aux = c, * n;
	if(c->prox == NULL){
		printf("!!SO EXISTE UM ELEMENTO NO CONJUNTO!!\n");
	}
	c->valor = c->prox->valor;
	n = c->prox;
	c->prox = c->prox->prox;
	free(n);
	return c;

	Conjunto * ant = c;
	while(ant->prox != NULL && ant->prox != n){
		ant = ant->prox;
	}
	if(ant->prox == NULL){
		printf("!!O ELEMENTO NAO SE ECONTRA NO CONJUNTO!!\n");
		return c;
	}
	ant->prox = ant->prox->prox;
	free(n);
	return c;
}

//verificar se um conjunto é vazio
void vazio(Conjunto * c){
	if(c == NULL){
		printf("!!O CONJUNTO VERIFICADO E VAZIO!!\n");
	}else{
		printf("!!O CONJUNTO VERIFICADO NAO E VAZIO!!\n");
	}
}

//verificar a cardinalidade de um dado conjunto
Conjunto * cardinalidade(Conjunto * c){
	Conjunto * aux = c;
	int contador;
	while(aux->prox == NULL){
		contador++;
		aux = aux->prox;
	}
	printf("!!O CONJUNTO TEM CARDINALIDADE %d!!\n", contador);
	return c;
}

//verificar se um elemento pertence ou nao a um conjunto
Conjunto * pertence(Conjunto * c,  int valor){
	Conjunto * aux = c;
	while(aux->prox != NULL){
		if(aux->chave == valor){
			return aux->chave;
		}else{
			printf("!!ELEMENTO NAO EXISTE NO CONJUNTO!!\n");
		}aux = aux->prox;
	}return c;
}

//verificar se um dado conjunto é sub-conjunto de outro
void subConjunto(Conjunto * c1, Conjunto * c2){
	Conjunto * aux1 = c1, * aux2 = c2;
	int cont1 = 0, cont2 = 0;
	int tam1 = 0, tam2 = 0;
	while(aux1->prox != NULL && aux2->prox != NULL){ tam1++, tam2++;
		if(aux1->elemento == aux2->elemento){ cont1++, cont2++;
			if(tam1 >= tam2){
				if(cont1 >= cont2){
					printf("!!O CONJUNTO B E SUB-CONJUNTO DE A!!\n");
				}
			}else{
				printf("!!O CONJUNTO A E SUB-CONJUNTO DE B!!\n");
			}
		}
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
}

//função que recebe dois conjuntos e realiza a interseção entre eles
Conjunto * intersecao(Conjunto * c1, Conjunto * c2){
	Conjunto * aux1 = c1, * aux2 = c2, * aux3, n;
	while(aux1->prox != NULL && aux2->prox != NULL){
		if(aux1->elemento == aux2->elemento){
			aux->elemento = n;
			Conjunto * result;
			Conjunto * novo = (conjunto *) calloc(1, sizeof(Conjunto));
			novo->elemento = n;
			novo->prox = result;
		}
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
	return result;
}

//função que verifica se dois conjuntos sao iguais
void iguais(Conjunto * c1, Conjunto * c2){
	Conjunto * aux1 = c1, * aux2 = c2, * aux3, n;
	while(aux1->prox != NULL && aux2->prox != NULL){
		if(aux1->elemento == aux2->elemento)	printf("!!OS CONJUNTOS SAO IGUAIS!!\n");
		aux1 = aux1->prox;
		aux2 = aux2->prox;

		else{
			break;
			printf("!!OS CONJUNTOS NAO SAO IGUAIS!!\n");
		}
	}
}

//função que realiza a união entre dois conjuntos
void uniao(Conjunto * c1, Conjunto * c2){
	if(c1 != NULL && c2 != NULL){
		if(c1->prox == NULL) c1->prox = c2;
		else{
			uniao(c1->prox, c2);
		}
	}else{
		printf("!!O CONJUNTO A OU B E VAZIO!!\n");
	}
}
