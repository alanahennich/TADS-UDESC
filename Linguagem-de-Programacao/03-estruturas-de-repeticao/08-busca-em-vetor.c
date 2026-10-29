/* 8. Faça um programa que leia um vetor de 10 números e pergunte ao usuário um número. 
Informe se esse número está presente no vetor e em qual posição.*/

#include <stdio.h>
#define TAMANHO 10
int main()
{
    // PASSO 1: Criar o vetor com espaço para 10 números
    int vetor[TAMANHO];
    int numero, i;
    int encontrado = 0; // "flag": começa como 0 (falso)

    // PASSO 2: Pedir os 10 números ao usuário
    printf("Digite 10 números:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // PASSO 3: Perguntar o número a ser buscado
    printf("\nDigite o número que deseja buscar: ");
    scanf("%d", &numero);

    // PASSO 4: Percorrer o vetor procurando o número
    for (i = 0; i < TAMANHO; i++)
    {
        if (vetor[i] == numero)
        {
            printf("Número %d encontrado na posição %d!\n", numero, i + 1);
            encontrado = 1; // muda para 1 (verdadeiro)
        }
    }

    // PASSO 5: Se não achou, avisar o usuário
    if (encontrado == 0)
    {
        printf("Número %d não encontrado no vetor.\n", numero);
    }

    return 0;
}