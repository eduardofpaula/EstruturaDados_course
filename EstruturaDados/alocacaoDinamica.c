// estrutura de dados para agrupar diferentes tipos de dados relacionados a um unico nome
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
    p -> x = 45;
    p -> y = 33;
    printf("Ponto = (%f,%f)", p->x,p->y);


    return 0;
}
