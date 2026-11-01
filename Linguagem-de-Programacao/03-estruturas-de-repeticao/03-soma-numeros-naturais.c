/* Faça um programa que apresente a soma dos cem
primeiros numeros naturais (1 + 2 + 3 + ... + 98 + 99 + 100).*/
#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("Soma dos 100 primeiros numeros naturais: %d\n", soma);

    return 0;
}