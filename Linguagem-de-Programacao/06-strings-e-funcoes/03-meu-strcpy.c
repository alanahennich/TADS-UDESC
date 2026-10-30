/* 3. Crie uma função chamada meu strcpy que copia o conteúdo de uma string para outra, como a função strcpy.*/

#include <stdio.h>
void meu_strcpy(char dest[], const char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(void)
{
    char src[] = "Exemplo de cópia";
    char dest[100];
    meu_strcpy(dest, src);
    printf("Origem: \"%s\"\n", src);
    printf("Destino: \"%s\"\n", dest);
    return 0;
}
