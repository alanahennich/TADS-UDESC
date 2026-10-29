/* 5. Desenvolva um programa que solicite dois numeros ao usuario, calcule a soma entre
eles e mostre o resultado da soma.
*/

#include <stdio.h>

int main()
{
    int x, y, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);

    soma = x + y;

    printf("%d + %d = %d\n", x, y, soma);

    return 0;
}