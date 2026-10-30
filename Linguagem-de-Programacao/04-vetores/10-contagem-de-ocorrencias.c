/*10. Faça um programa que leia um vetor de 20 números e peça um número ao usuário. 
Conte quantas vezes esse número aparece no vetor.*/

#include <stdio.h>
#define TAMANHO 20

int main()
{
    int vetor[TAMANHO];
    int numero, i, contador = 0;

    // Leitura dos 20 números
    printf("Digite 20 números:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Pergunta ao usuário qual número deseja buscar
    printf("\nDigite o número que deseja buscar: ");
    scanf("%d", &numero);

    // Conta quantas vezes o número aparece
    for (i = 0; i < TAMANHO; i++)
    {
        if (vetor[i] == numero)
        {
            contador++;
        }
    }

    // Exibe o resultado
    if (contador > 0)
    {
        printf("O número aparece %d vez(es) no vetor.\n", contador);
    }
    else
    {
        printf("O número não se repete,\n");
    }

    return 0;
}
