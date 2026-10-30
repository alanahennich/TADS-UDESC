/*2. Crie uma função chamada meu_strcat que concatena duas strings. 
A função deve adicionar a segunda string ao final da primeira, como a função strcat. */

#include <stdio.h>
void meu_strcat(char destino[], char origem[])
{
    int i = 0;
    int j = 0;

    while (destino[i] != '\0')
    {
        i++;
    }

    while (origem[j] != '\0')
    {
        destino[i] = origem[j];
        i++;
        j++;
    }

    destino[i] = '\0';
}

int main()
{
    char palavra1[50] = "Hello "; 
    char palavra2[] = "world";

    meu_strcat(palavra1, palavra2);

    printf("Resultado: %s\n", palavra1);
    return 0;
}
