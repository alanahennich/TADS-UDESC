/*1. Crie uma função chamada meu_strlen que recebe uma string como argumento e
retorna o tamanho dela (não use a função strlen da biblioteca padrão).*/

#include <stdio.h>
int meu_strlen(char str[])
{
    int contador = 0;
    while (str[contador] != '\0') 
    {
        contador++;
    }
    return contador;
}

int main()
{
    char palavra[] = "cachorro";
    printf("Tamanho: %d\n", meu_strlen(palavra));
    return 0;
}
