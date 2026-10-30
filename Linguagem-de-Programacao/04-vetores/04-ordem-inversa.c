/*4. Faça um programa que leia um vetor de 10 números inteiros e exiba-os na tela na ordem de entrada e em ordem inversa.*/

#include <stdio.h>
#define TAMANHO 3
int main()
{
    int vetor[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }

    printf("\nValores na ordem de entrada: ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("[%d]", vetor[i]);
    }

    printf("\nValores na ordem inversa: ");
    for (int i = TAMANHO - 1; i >= 0; i--) // TAMANHO - 1 porque o vetor começa em 0
    {
        printf("[%d]", vetor[i]);
    }

    return 0;
}