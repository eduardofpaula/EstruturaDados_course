#include <stdio.h>
#include <stdlib.h>

struct carro
{
    float km;
    float vel;
    struct carro *proxCarro;
    
};

typedef struct carro Carro;

Carro *corridaCarros;

void incluirCarros(float km, float vel) {

    Carro *c = (Carro*) malloc(sizeof(Carro));
    c->km = km;
    c->vel = vel;
    c->proxCarro = corridaCarros;

    corridaCarros = c;

}


int main()
{
    incluirCarros(2,5);
    incluirCarros(3,8);
    incluirCarros(5,9);


    printf("%.0f",corridaCarros->proxCarro->km);   
}

