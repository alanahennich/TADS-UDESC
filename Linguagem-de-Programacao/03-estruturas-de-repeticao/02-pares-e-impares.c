/* Faça um programa que peça ao usuario 10 números e mostre posteriormente quantos
são pares, bem como quantos são ímpares.*/
#include <stdio.h>

int main() {
    int i, num, pares = 0, impares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o próximo número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}