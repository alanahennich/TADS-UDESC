/* Faça um programa que solicite ao usuário 10 números inteiros e ao final, mostre o
maior número informado. Considere que o usuário não irá informar números iguais.
*/
#include <stdio.h>

int main() {
    int i, num, maior;

    printf("Digite o 1º numero: ");
    scanf("%d", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num > maior)
            maior = num;
    }

    printf("Maior numero informado: %d\n", maior);

    return 0;
}