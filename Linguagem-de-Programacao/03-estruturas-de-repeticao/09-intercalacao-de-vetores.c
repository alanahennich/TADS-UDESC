/*9. Faça um programa que leia dois vetores de 5 elementos cada e crie um terceiro vetor intercalando os valores dos dois primeiros.*/

#include <stdio.h>
#define TAMANHO 5
int main()
{
    int vetor1[TAMANHO], vetor2[TAMANHO], vetor3[TAMANHO * 2];
    int i, j = 0;

    printf("Digite 5 números para o primeiro vetor:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("\nDigite 5 números para o segundo vetor:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < TAMANHO; i++)
    {
        vetor3[j++] = vetor1[i]; 
        vetor3[j++] = vetor2[i]; 
    }

    printf("\nVetor intercalado:\n");
    for (i = 0; i < TAMANHO * 2; i++)
    {
        printf("[ %d ] ", vetor3[i]);
    }

    return 0;
}