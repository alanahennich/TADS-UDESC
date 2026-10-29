/* 4. Desenvolva um programa que peça ao usuario a idade e o peso de seu pet, e qual
tipo de pet. Se for cachorro o usuario deve digitar c, se for gato, digita g. Mostre
as entradas na tela.
*/

#include <stdio.h>

int main()
{
    int idade;
    float peso;
    char tipo;

    printf("Digite a idade do seu pet (em anos): ");
    scanf("%d", &idade);

    printf("Digite o peso do seu pet em kg. Caso precise separar casas decimais, utilize ponto (por exemplo: 7.4): ");
    scanf("%f", &peso);

    printf("Informe qual o seu tipo de pet. Digite C para cachorro ou G para gato: ");
    scanf(" %c", &tipo); // !!! espaço antes de %c evita leitura de espaços em branco !!!

    printf("\nDados do seu pet: \n");
    printf("Idade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);

    if (tipo == 'c' || tipo == 'C')
    {
        printf("Tipo: Cachorro\n");
    }
    else if (tipo == 'g' || tipo == 'G')
    {
        printf("Tipo: Gato\n");
    }
    else
    {
        printf("Tipo: Desconhecido\n");
    }

    return 0;
}