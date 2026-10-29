/*3. As maçãs importadas custam R$ 2.30 cada se forem compradas menos de uma dúzia, 
e R$ 1.95 se forem compradas uma dúzia ou acima. Faça um programa que leia o número de maçãs compradas, 
calcule e escreva o custo total da compra.*/

#include <stdio.h>
#define DUZIA 12

int main()
{
    int fruta;
    float custo_total;
    const float VALOR_UNIDADE = 2.30; 
    const float VALOR_DUZIA = 1.95;

    printf("Quantas maçãs foram compradas?\n");
    scanf("%d", &fruta);

    if (fruta >= DUZIA)
    {
        custo_total = VALOR_DUZIA * fruta;

        printf("Custo total: R$%.2f", custo_total);
    }
    else if (fruta < DUZIA)
    {
        custo_total = VALOR_UNIDADE * fruta;

        printf("Custo total: R$%.2f", custo_total);
    }

    return 0;
}