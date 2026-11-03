/*7. A série de Fibonacci é uma sequência de números inteiros, começando por 1 e 1, onde
cada termo subsequente corresponde à soma dos dois anteriores. Faça um programa
que solicite o n-ésimo termo da série e retorne o número correspondente ao termo por
meio de uma função recursiva.
    ○ Exemplo 1, dado o termo 7, a saída esperada é 13.
    ○ Exemplo 2, dado o termo 9, a saída esperada é 34. */

#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um termo: ");
    scanf("%d", &num);

    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));

    return 0;
}
