/* 6. (De Oliveira; Manzano, 2004) Desenvolva um algoritmo que peca ao usuario um
numero inteiro. Como saida, mostre: o numero, seu antecessor e seu sucessor.
Exemplo: “O numero informado foi 30, o antecessor eh 29 e o sucessor eh 31.”
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO numero informado foi %d, o antecessor eh %d e o sucessor eh %d\n", num, num - 1, num + 1);

    return 0;
}