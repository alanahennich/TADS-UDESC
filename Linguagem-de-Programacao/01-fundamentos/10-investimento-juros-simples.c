/* 10. Desenvolva um programa para calcular o valor final de um investimento de Maria
em um banco. O programa deve receber o valor investido e mostrar quanto dinheiro
ela tera apos 3 anos de investimento. Considere que o banco oferece uma taxa de
juros simples de 5% ao ano, e que a taxa nao muda. valor final = valor inicial +
(valor inicial × taxa juros × anos)
*/

#include <stdio.h>

int main() {
    float vi, vf, taxa = 0.05;
    int anos = 3;

    printf("Digite o valor investido por Maria: ");
    scanf("%f", &vi);

    vf = vi + (vi * taxa * anos);

    printf("Valor daqui 3 anos: %.2f\n", vf);

    return 0;
}