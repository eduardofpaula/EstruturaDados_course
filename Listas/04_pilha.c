#include <stdio.h>
#include <stdlib.h>

struct prato
{
    char cor;
    struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha;

void add(Prato *p, char cor){
    
    Prato *variavel = (Prato*) malloc(sizeof(Prato));
	variavel->prox = NULL; 
    variavel->cor = cor;
    variavel->prox = p->prox;
    //recebe uma nova cabeça
    p->prox = variavel;

}

void rem(Prato *p, char cor){
    while(p->prox->cor!=cor){
        Prato *temp = p->prox;
        p->prox = temp->prox;
        free(temp);
    }
    Prato *temp2 = p->prox;
    p->prox = temp2->prox;
    free(temp2);

}

void imprime(Prato *p){
    if(p->prox!=NULL){
        printf("\nCor do Prato: %c",p->cor);
        imprime(p->prox);
    }
}

int main(void) {

    //alocou  *p na memoria
    Prato *p = (Prato*) malloc(sizeof(Prato));
      
    add(p,'b');
    add(p,'y');
    add(p,'t');
    add(p,'r');

    rem(p,'t');

	imprime(p);

    return 0;
}