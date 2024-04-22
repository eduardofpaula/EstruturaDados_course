// estrutura de dados para agrupar diferentes tipos de dados relacionados a um unico nome
struct pessoa
{
    int idade;
    float altura;
};

//redefine os tipos de dados para serem mais legiveis no codigo
//redefinil o nome de struct pessoa para Pessoa
typedef struct pessoa Pessoa;

int main(){

    //acessando o tipo de dados Pessoa
    Pessoa p;
    p.idade = 5;
    p.altura = 1.65;

    printf("A altura da pessoa e: %.2f", p.altura);
    printf("\nA idade da pessoa e: %d", p.idade);
     
    return 0;
}
