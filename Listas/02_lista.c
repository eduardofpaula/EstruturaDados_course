#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

void add(Ponto *listaPontos, float x, float y) {
	// aloca memoria para um novo ponto 
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	//define as coordenadas para as variaveis
    p->x = x;
    p->y = y;
    p->prox = NULL;

	//se listaPontos->prox for vazia,vai adicionar um nome ponto após prox
    if (listaPontos->prox == NULL) {
        listaPontos->prox = p;
    } else {
		//percorre a lista até encontrar o ultimo item e adiciona um novo ponto após ele
        Ponto *atual = listaPontos;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = p;
    }
}

//funcao recebe as listas e coordenadas do ponto a ser removido
void removePonto(Ponto *listaPontos, float x, float y) {
	// ponteiros usados para percorrer a lista
	// atual = usado para percorrer a lista e encontrar o item a ser removido  
    Ponto *atual = listaPontos->prox;
	// anterior = para ajustar os ponteiros quando um nó é removido
    Ponto *anterior = listaPontos;

	//ajusta o ponteiro 'prox' 
    while (atual != NULL) {
        if (atual->x == x && atual->y == y) {
            anterior->prox = atual->prox;
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
}

void imprime(Ponto *listaPontos) {
    Ponto *atual = listaPontos->prox; // Pular o nó inicial fictício
    while (atual != NULL) {
        printf("Ponto: (%.0f, %.0f)\n", atual->x, atual->y);
        atual = atual->prox;
    }
}

int main() {

    Ponto *listaPontos = (Ponto*) malloc(sizeof(Ponto));
    listaPontos->x = 0;
    listaPontos->y = 0;
    listaPontos->prox = NULL;

    add(listaPontos, 1, 5);
    add(listaPontos, 2, 7);
    add(listaPontos, 5, 3);

    printf("Lista antes de remover:\n");
    imprime(listaPontos);

    removePonto(listaPontos, 2, 7);

    printf("Lista apos remover (2, 7):\n");
    imprime(listaPontos);

    removePonto(listaPontos, 5, 3);

    printf("Lista apos remover (5, 3):\n");
    imprime(listaPontos);

    removePonto(listaPontos, 1, 5);

    printf("Lista apos remover (1, 5):\n");
    imprime(listaPontos);
    
    return 0;
}
