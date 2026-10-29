/*8. Faça um programa que verifique se o ano é bissexto. O ano deve ser informado pelo
usuário com 04 dígitos e não pode ser menor ou igual a 0. Para saber se o ano é bissexto:
    • Deve ser divisível por 4 e não divisível por 100 ou;
    • Deve ser divisível por 400.*/

#include <stdio.h>

int main()
{
    int ano;

    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    {
        printf("Ano bissexto!\n");
    }
    else
    {
        printf("Ano não bissexto!\n");
    }

    return 0;
}
