/* 3. Desenvolva um programa que solicite o ano atual e mostre na tela a mensagem
    Ótimo, ano!, substituindo ano pelo ano informado.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int ano;

    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    printf("Ótimo, %d!\n", ano);

    return 0;
}
