/*4. Faça um programa usando else if que peça dois números e mostre qual é maior deles. 
Se forem iguais, informar que são iguais*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois números:\n");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d é maior", a);
    }
    else if (b > a)
    {
        printf("%d é maior", b);
    }
    else
    {
        printf("Eles são iguais");
    }
    

    return 0;
}
