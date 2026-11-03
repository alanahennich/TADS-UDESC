/*5. Run-length encoding (RLE) é uma forma simples de compressão de textos. A ideia
desta técnica é representar caracteres repetidos sucessivamente com um contador
seguido pelo caractere. Dada uma string, retorne o texto resultante da aplicação da
técnica RLE.
    ○ Exemplo, dada a string "AAAABBBCCDAA", a saída compactada deve ser "4A3B2C1D2A"*/

#include <stdio.h>
#include <string.h>

void RLE(char str[])
{
    int i, contador = 1;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == str[i + 1])
        {
            contador++;
        }
        else
        {
            printf("%d%c", contador, str[i]);
            contador = 1;
        }
    }
}

int main()
{
    char str[] = "AAAABBBCCDAA";

    RLE(str);

    return 0;
}