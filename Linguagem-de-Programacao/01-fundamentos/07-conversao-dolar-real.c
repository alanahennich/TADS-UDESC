/*
7. (De Oliveira; Manzano, 2004) Desenvolva um algoritmo que funcione como um
conversor de dolar para real. O usuario devera informar o valor do cambio do
dolar naquele dia e o valor em dolares que deseja converter. Como saıda, o algoritmo
devera mostrar quantos reais sao necessarios para comprar X dolares:
real = quantidade de dolares × cambio
*/

#include <stdio.h>

int main()
{

    float cambio, dolares, reais;

    printf("Informe o valor do cambio do dolar hoje (ex: 5.15): ");
    scanf("%f", &cambio);

    printf("Digite o valor em dolares que voce deseja converter: ");
    scanf("%f", &dolares);

    reais = dolares * cambio;

    printf("Para comprar US$ %.2f, voce precisara de R$ %.2f.\n", dolares, reais);

    return 0;
}