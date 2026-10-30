/*1. Faça um programa que peça os valores de uma matriz 2x3 e ao final, 
mostre na tela o total da soma de todos os elementos dessa matriz.*/

#include <stdio.h>
#define L 2
#define C 3
int main()
{
    int matriz[L][C];
    int soma = 0;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Digite numero inteiro:\n");
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }

    printf("Soma dos elementos: %d\n", soma);

    return 0;
}