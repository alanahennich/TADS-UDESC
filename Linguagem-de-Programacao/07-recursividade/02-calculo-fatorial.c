// 2. Escreva uma função recursiva que calcule o fatorial de um número inteiro não negativo n.
#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial (n - 1);
    }
}

int main()
{
    int numero = 5;
    int resultado = fatorial(numero);

    printf("O fatorial de %d eh: %d\n", numero, resultado);
    int numero = 5;
    int resultado = fatorial(numero);

    printf("O fatorial de %d eh: %d\n", numero, resultado);

    return 0;
}