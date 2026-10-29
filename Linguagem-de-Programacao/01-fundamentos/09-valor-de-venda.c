/* 9. Desenvolva um programa que calcule o valor de venda de uma mercadoria. O
usuario devera informar seu valor de compra. O valor de venda é dado por: valor
de compra + 20% (representante) + 30% (impostos). Mostre o valor total de venda
dessa mercadoria. Os valores de 20% e 30% sao calculados com base no valor de
compra.
*/

#include <stdio.h>

int main() {
    float compra, venda;

    printf("Digite o valor de compra da mercadoria: ");
    scanf("%f", &compra);

    venda = compra + (compra * 0.20) + (compra * 0.30);

    printf("Valor total de venda da mercadoria: %.2f\n", venda);

    return 0;
}