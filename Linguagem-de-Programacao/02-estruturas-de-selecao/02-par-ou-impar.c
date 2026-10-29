/*2. Faça um programa que solicite um número e diga se ele é: Par ou ímpar*/

#include <stdio.h>

int main()

{

    int numero;
    printf("Digite um número:\n"); // resto
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Ímpar");
    }

    return 0;
}