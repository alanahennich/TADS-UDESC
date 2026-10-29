/* 12. Desenvolva um programa que receba dois numeros inteiros e mostre o resultado das
seguintes operacoes:
    • Soma dos dois numeros
    • Subtracao do primeiro pelo segundo
    • Multiplicacao dos dois numeros
    • Divisao do primeiro pelo segundo
    • O primeiro numero elevado ao segundo numero
    • O resto da divisao do primeiro numero pelo segundo
*/

#include <stdio.h>
#include <math.h>  // pow

int main() {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("\n%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d x %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d : %d = %d\n", a, b, a / b);
        printf("Resto da divisão = %d\n", a % b);
    } else {
        printf("Divisão: indeterminado\n");
        printf("Resto: indeterminado\n");
    }

    printf("%d elevado a %d = %.2f\n", a, b, pow(a, b));

    return 0;
}