/* 5. Faça um programa que leia um leia 5 números em um vetor A, mais 5 números em outro vetor B. 
Armazene a soma dos elementos dos vetores A e B em um terceiro vetor C. Ex.: vetorC[1] = vetorA[1] + vetorB[1]. 
Mostre as somas armazenadas no vetor C ao final.*/

#include <stdio.h>
#define TAMANHO 5
int main()
{
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int vetorC[TAMANHO];
    int i;

    printf("Digite 5 valores para o vetor A:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 5 valores para o vetor B:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < TAMANHO; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("Vetor C: ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("[%d] ", vetorC[i]);
    }

    return 0;
}
