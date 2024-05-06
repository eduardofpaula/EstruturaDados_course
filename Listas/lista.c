
struct ponto
{
    float x;
    float y;
    struct ponto *prox;
    
};

typedef struct ponto Ponto;

Ponto *listaPontos;

void add(float x, float y) {

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x=x;
    p->y=y;
    p->prox = listaPontos;

    listaPontos = p;
};


int main() {
    
    add(1,5);

}
