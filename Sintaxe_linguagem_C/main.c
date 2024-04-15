#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 999;     // variavel inteira %d
    float c = 80.9;  // variave real %f
    double t = 60.8; // variavel real(dobro de precisão, usadas em grandes
                     // processamentos, gasta mais memória) %c
    char a = 'F';    // variavel char recebe um unico caractere %c
    printf("O valor da variavel inteira é: %d\n", x);
    printf("O valor da variavel real é: %.2f\n", c);
    printf("O valor da variavel real(double) é: %.2f\n", t);
    printf("O valor da variavel caractere é: %c", a);
    return 0;
}