/*4. Crie uma função chamada meu_strcmp que compara duas strings e retorna:
    – 1, se as strings são iguais.
    – 0, se as strings não são iguais.*/

#include <stdio.h>
int meu_strcmp(char string_1[], char string_2[])
{
    int i = 0; 

    while (string_1[i] != '\0' && string_2[i] != '\0') 
    {
        if (string_1[i] != string_2[i])
        {
            return 0;
        }
        i++;
    }

    if (string_1[i] == '\0' && string_2[i] == '\0')
    {
        return 1;
    }

    return 0;
}

int main()
{
    printf("%d\n", meu_strcmp("banana", "banana"));  
    printf("%d\n", meu_strcmp("banana", "abacaxi")); 
    printf("%d\n", meu_strcmp("banana", "bana"));

    return 0;
}