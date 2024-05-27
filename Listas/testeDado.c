#include <stdio.h>
#include <stdlib.h>

struct dado
{
    float lado1;
    float lado2;

    struct dado *proxDado;

};

typedef struct dado Dado;

Dado *VariosLados;

void incluirLados(float lado1, float lado2) {

    Dado *d = (Dado*) malloc(sizeof(Dado));
    d -> lado1 = lado1;
    d -> lado2 = lado2;
    d -> proxDado = VariosLados;

    VariosLados = d;    
}

void imprime() 
{

    Dado *auxLista = VariosLados;
    while(auxLista != NULL) 
    {
        printf("\nLados 1 e 2 dos Dados (%.1f,%.1f)",auxLista->lado1,auxLista->lado2);
        auxLista = auxLista->proxDado;
    }
}

int main()
{
    incluirLados(7,9);
    incluirLados(5,1);
    incluirLados(80,67);

    imprime();

    return 0;
}
