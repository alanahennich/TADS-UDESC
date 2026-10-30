/*2. Faça um programa que peça os valores inteiros para uma matriz 3x3 e peça ao usuário qual o número 
da linha que ele deseja ver os valores e mostre na tela somente os valores dessa linha.*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3
int main()
{
    int matriz[LINHAS][COLUNAS];
    int i, j, linha;

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Digite um número:\n");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o número da linha que deseja visualizar (0, 1 ou 2): ");
    scanf("%d", &linha);

    if (linha >= 0 && linha < LINHAS)
    {
        printf("\nValores da linha %d:\n", linha);
        for (j = 0; j < COLUNAS; j++)
        {
            printf("[%d] ", matriz[linha][j]);
        }
        printf("\n");
    }
    else
    {
        printf("\nLinha inválida\n");
    }

    return 0;
}