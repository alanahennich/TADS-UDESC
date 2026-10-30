/*7. Faça um programa que leia um vetor de 10 elementos e armazene um segundo vetor com os mesmos elementos em ordem inversa.*/

#include <stdio.h>
#define TAMANHO 5
int main()
{
    int vetor1[TAMANHO], vetor2[TAMANHO];
    int i;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < TAMANHO; i++)
    {
        vetor2[i] = vetor1[(TAMANHO - 1) - i];
    }

    printf("Vetor 1: ");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("[%d] ", vetor1[i]);
    }

    printf("Vetor 2: ");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("[%d] ", vetor2[i]);
    }

    return 0;
}