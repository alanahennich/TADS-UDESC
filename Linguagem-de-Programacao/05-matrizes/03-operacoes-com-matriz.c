/*3. Em uma matriz 4x4 preenchida com valores inteiros, mostre na tela:
    • A soma de todos os elementos das linhas pares;
    • O valor do primeiro elemento da matriz e do último;
    • A soma dos elementos da linha 2;
    • Mostre somente os elementos da Diagonal Principal;
    • O maior valor e sua posição na matriz;
    • O menor valor e sua posição na matriz.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>   
#define LINHAS 4
#define COLUNAS 4
int main()
{
    srand(time(NULL)); 

    int matriz[LINHAS][COLUNAS];
    int i, j;
    int soma_linhas_pares = 0, soma_linha_2 = 0;
    int maior, menor, posicao_maior_i, posicao_maior_j, posicao_menor_i, posicao_menor_j;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = rand() % 16 + 1; 
        }
    }

    maior = menor = matriz[0][0];
    posicao_maior_i = posicao_menor_i = 0;
    posicao_maior_j = posicao_menor_j = 0;

    // Processamento
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            if (i % 2 == 0)
            {
                soma_linhas_pares += matriz[i][j];
            }
            if (i == 1)
            {
                soma_linha_2 += matriz[i][j];
            }
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                posicao_maior_i = i;
                posicao_maior_j = j;
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                posicao_menor_i = i;
                posicao_menor_j = j;
            }
        }
    }

    printf("\nSoma das linhas pares: %d\n", soma_linhas_pares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[LINHAS - 1][COLUNAS - 1]);
    printf("Soma dos elementos da linha 2: %d\n", soma_linha_2);

    printf("\nDiagonal Principal: ");
    for (i = 0; i < LINHAS; i++)
    {
        printf("[%d] ", matriz[i][i]);
    }

    printf("\nMaior valor: %d na posição [%d][%d]\n", maior, posicao_maior_i, posicao_maior_j);
    printf("Menor valor: %d na posição [%d][%d]\n", menor, posicao_menor_i, posicao_menor_j);

    return 0;
}