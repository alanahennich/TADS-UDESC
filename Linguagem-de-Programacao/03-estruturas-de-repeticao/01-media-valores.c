/* 1. Faça um programa que leia um vetor de float e determine a média de seus valores.*/

#include <stdio.h>
#define TAMANHO 3
int main()
{
    float notas[TAMANHO];
    float somatorio = 0;
    float media;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor:\n");
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        somatorio = somatorio + notas[i];
    }

    media = somatorio / TAMANHO;

    printf("\nMédia: %.2f", media);

    return 0;
}