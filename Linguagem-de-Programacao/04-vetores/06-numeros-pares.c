/*6. Faça um programa que leia um vetor de 20 números inteiros e exiba quantos desses números são pares.*/

#include <stdio.h>
#define TAMANHO 5

int main(){
    int vetor[TAMANHO], i;
    int numeros_pares = 0;  // Variável para contar a quantidade de números pares
    
    printf("Digite 20 valores para o vetor:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("V[%d]: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            numeros_pares++;
        }
    }

    printf("Quantidade de números pares: %d", numeros_pares);

    return 0;
}