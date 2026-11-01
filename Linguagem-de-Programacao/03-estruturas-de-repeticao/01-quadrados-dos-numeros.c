/* (De Oliveira; Manzano, 2004) Faça um programa que apresente como resultado os
quadrados dos números inteiros existentes na faixa de valores de 15 a 200.
*/

#include <stdio.h>

int main() {
    int i;

    for (i = 15; i <= 200; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}
