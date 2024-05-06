
//criando variavel
int val = 5;
//criando ponteiro
int *p;

int main()
{
    //ponteiro apontando para o endereco da variavel
    p = &val;
    printf("O valor apontado por 'p' e: %d", *p);

    int valor = 20; // declaração de uma variável inteira
    int *ponteiro; // declaração de um ponteiro para int

    ponteiro = &valor; // armazenando o endereço de valor em ponteiro

    printf("\nEndereco de memoria de valor: %p\n", (void *)&valor);
    printf("Endereco de memoria armazenado em ponteiro: %p\n", (void *)ponteiro);
    printf("Valor de valor: %d\n", valor);
    printf("Valor apontado por ponteiro: %d\n", *ponteiro);

    return 0;
}

