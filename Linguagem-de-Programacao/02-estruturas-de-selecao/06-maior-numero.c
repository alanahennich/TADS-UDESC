/*6. Faça um programa que peça três números e diga qual o maior entre os três.*/

#include <stdio.h>

int main()
{
    int maior_numero, a, b, c;

    printf("Digite três números:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b) && (a >= c))
    {
        maior_numero = a;
    }
    else if ((b >= a) && (b >= c))
    {
        maior_numero = b;
    }
    else
    {
        maior_numero = c;
    }

    printf("%d é o maior número", maior_numero);

    return 0;
}
