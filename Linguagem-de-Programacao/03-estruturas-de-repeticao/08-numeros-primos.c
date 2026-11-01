/*Dados dois inteiros, n e k, escreva um programa que imprima na saída padrão os
n menores números primos maiores que k. Por exemplo, para n = 5 e k = 10 
o programa imprime 11, 13, 17, 19, 23.*/
#include <stdio.h>

int ehPrimo(int num) {
    int i;
    if (num < 2) return 0;

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, k, contador = 0, numero;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    numero = k + 1;

    while (contador < n) {
        if (ehPrimo(numero)) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}