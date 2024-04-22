struct ponto
{
    float x;
    float y;
};

//redefinindo o nome do struct 
typedef struct ponto Ponto;

int main()
{
    //ponteiro que aponta pra uma estrutura dinamicamente do tipo ponto
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = 1;
    p->y = 5;
    printf("Ponto = (%f,%f)", p->x,p->y);


    return 0;
}
