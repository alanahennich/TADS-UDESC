/*3. Faça um programa que leia um vetor de inteiros e determine a média de seus valores. 
A seguir, o programa deve mostrar na tela quantos e quais os valores que estão acima da média.*/

#include <stdio.h>
#define TAMANHO 4
int main()
{
    int vetor[TAMANHO];
    int somatorio = 0, acima_media = 0;
    float media;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        somatorio = somatorio + vetor[i];
    }

    media = (float)somatorio / TAMANHO; 
    printf("Média: %.1f\n", media);
    printf("Valores acima da média:\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        if (vetor[i] > media)
        {
            acima_media++;
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}