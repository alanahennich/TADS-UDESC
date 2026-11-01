/* Faça um programa em que peça para o usuário digitar dois números inteiros. Compare
o primeiro número com o segundo. Se o primeiro número for menor que o segundo,
incremente-o até os dois serem iguais. Caso o primeiro número seja maior que o
segundo, decremente até serem iguais.*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a < b) {
        while (a < b) {
            a++;
            printf("%d\n", a);
        }
    } else if (a > b) {
        while (a > b) {
            a--;
            printf("%d\n", a);
        }
    } else {
        printf("Os numeros ja sao iguais.\n");
    }

    return 0;
}