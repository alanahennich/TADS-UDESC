/*11. Faça um programa que leia um vetor de 15 números e exiba a soma dos elementos que estão em posições ímpares.*/

#include <stdio.h>
#define TAMANHO 15

int main()
{
    int vetor[TAMANHO];
    int i, soma = 0;

    // Leitura dos 15 números
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    // Soma dos elementos em posições ímpares
    for (i = 0; i < TAMANHO; i++)
    {
        if (i % 2 != 0)
        { // posição ímpar (1, 3, 5, ...)
            soma = soma + vetor[i];
        }
    }

    // Exibição do resultado
    printf("\nA soma dos elementos em posições ímpares é: %d\n", soma);

    return 0;
}
