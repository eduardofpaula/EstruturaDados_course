#include <stdio.h>

//operadores comparação em C
// <  comparação menor 
// >  comparação maior
// >= comparação maior ou igual
// <= comparação menor ou igual
// != comparação diferença

int main()
{

    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    if (a == 0){
        printf("A variavel 'a' e 0");
    }
    else{
        printf("A variavel 'a' nao e 0");
    }
    return 0;
}
