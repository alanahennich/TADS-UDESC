/* 4. Faça um programa que leia um número inteiro e um incremento, e mostre na tela a 
sequência de números desde 0 até o número lido, com o incremento especificado. */
#include <stdio.h>

int main() {
    int numero, incremento, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    for (i = 0; i <= numero; i += incremento) {
        printf("%d ", i);
    }

    return 0;
}