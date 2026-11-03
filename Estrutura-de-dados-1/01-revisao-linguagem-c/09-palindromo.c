/*9. Faça um programa que leia uma cadeia de caracteres e, em seguida, o programa deve
retornar true se a cadeia forma um palíndromo, caso contrário deve retornar false.
    ○ Exemplo 1, dada a string "abcd", a saída esperada é false.
    ○ Exemplo 2, dada a string "abba", a saída esperada é true.
*/
#include <stdio.h>
#include <string.h>

#define MAX 50

void main() {
    char str[MAX];

    printf("Informe um texto: ");
    scanf("%s", str);

    int tamanho = strlen(str);

    for (int i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - 1 - i]) {
            printf("false\n");
            return;
        }
    }

    printf("true\n");
}