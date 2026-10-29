/*1. Faça um programa que solicite um número e diga se ele é: Positivo ou Negativo.*/
#include <stdio.h>

int main()
{

    int numero;
    printf("Digite um número:\n");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("Positivo!\n");
    }
    else
    {
        printf("Negativo!\n");
    }

    return 0;
}