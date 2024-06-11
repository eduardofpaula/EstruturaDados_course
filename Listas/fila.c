#include <stdio.h>
#include <stdlib.h>

struct usuario
{
    int senha;
    struct usuario *prox;
};

typedef struct usuario Usuario;

Usuario *fila;

void add(int senha){
    
    //alocação dinamica
    Usuario *p = (Usuario*) malloc(sizeof(Usuario));
    p->senha = senha;
    p->prox = NULL;

    //se for vazia, vai criar uma fila nova
    if(fila==NULL){
        fila = p;
    }else{
        //percorrer o item até encontrar o elemento prox que aponta pra nulo
        Usuario *filaAux = fila;
        // quando o ponteiro filaAux chegar a NULL, vai chegar no final da fila
        while(filaAux->prox != NULL){
            filaAux = filaAux->prox;
        }
        filaAux -> prox = p;
    }
}


//funcao remover fila
void remover(){
    if(fila==NULL){
        printf("Fila vazia");
    }else{
        fila = fila->prox;
    }
}

//funcao pra imprimir na tela
void mostrarTela(Usuario *f){
    if(f!=NULL){
        printf("\nSenha do usuario: %d",f->senha);
        mostrarTela(f->prox);
    }
}

int main(void){

    add(5);
    add(3);
    add(9);
    add(23);
    add(66);
    add(89);
    
    Usuario *filaAux = fila;
    mostrarTela(filaAux);

    printf("\n");
    
    remover();

    filaAux = fila;

    mostrarTela(filaAux);

    printf("\n");

    remover();

    filaAux = fila;

    mostrarTela(filaAux);

    printf("\n");
}
