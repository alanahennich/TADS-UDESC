/*2. Faça um programa que encontre o maior e o menor valor de um vetor.*/

#include <stdio.h>
#define TAMANHO 3
int main()
{
    int vetor[TAMANHO], maior, menor;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < TAMANHO; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    
    return 0;
}