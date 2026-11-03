/*2. Dado um vetor de números inteiros v, retorne um novo vetor de forma que cada
elemento no índice i seja o produto de todos os números na matriz original, com
exceção de i.
    ○ Exemplo 1: dado v = [1,2,3,4,5], a saída esperada é [120,60,40,30,24]
    ○ Exemplo 2: dado v = [3,2,1], a saída esperada é [2,3,6]
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,k;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int r[n];
    
    for (int i = 0; i < n; i++) {
        printf("Informe o número %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
        r[i] = 1;
    }

    printf("[ ");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                r[i] *= v[j];
            }
        }

        printf("%d ", r[i]);
    }

    printf("]\n");
}