/*5. Faça um programa usando estruturas aninhadas que leia a idade de uma pessoa
e informe a sua classe eleitoral:
    • Não eleitor (abaixo de 18 anos);
    • Eleitor obrigatório (de 18 a 65 anos);
    • Eleitor facultativo (acima de 65 anos).
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Insira a sua idade:\n");
    scanf("%d", &idade);

    if (idade < 18) 
    {
        printf("Não eleitor");
    }
    else
    {
        if (idade <= 65) 
        {
            printf("Eleitor obrigatório");
        }
        else
        {
            printf("Eleitor facultativo");
        }
    }

    return 0;
}
