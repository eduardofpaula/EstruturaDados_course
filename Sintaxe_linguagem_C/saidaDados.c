#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma;
    printf("\nDigite um número: ");
    scanf("%d", &num);
    soma = num + 5;
    printf("O valor de 'num' + 5 é: %d\n", soma);

    // Limpando o buffer de entrada antes de ler a próxima entrada
    while (getchar() != '\n');

    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("A letra é: %c\n", letra);

    return 0;
}
