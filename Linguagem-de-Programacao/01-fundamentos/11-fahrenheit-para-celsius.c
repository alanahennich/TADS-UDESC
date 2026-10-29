/* 11. (De Oliveira; Manzano, 2004) Desenvolva um programa que receba um valor de
temperatura em graus Fahrenheit (ºF) e o converta para graus Celsius (ºC). Como
resultado, mostre a seguinte mensagem: “XXºF equivalem a YYºC.”. A formula
de conversao é: celsius = [5 x (fahrenheit - 32)] / 9
*/

#include <stdio.h>

int main() {
    float f, c;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5 * (f - 32)) / 9;

    printf("\n%.2f Fahrenheit equivalem a %.2f Celsius\n", f, c);

    return 0;
}