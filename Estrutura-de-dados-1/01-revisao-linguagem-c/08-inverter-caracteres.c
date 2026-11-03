/*8. Faça um programa que leia uma cadeia de caracteres e retorne uma nova cadeia de
caracteres invertida. Utilize uma função recursiva para realizar a inversão da sequência
de caracteres.
    ○ Exemplo, dado o termo "abc", a saída esperada é "cba".*/
#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char str[MAX];

    printf("Informe um texto: ");
    scanf("%s", str);

    int tamanho = strlen(str);

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c",str[i]);
    }

    printf("\n");
}