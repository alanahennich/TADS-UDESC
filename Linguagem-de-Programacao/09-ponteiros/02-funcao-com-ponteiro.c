//  Crie uma função que recebe um ponteiro para essa variável.
//  Incremente a variável usando ++.
//  Implemente a chamada da função criada na main.
//  Mostre o novo valor da variável na função main.
#include <stdio.h>

void incrementar(int *ptr) {
    (*ptr)++; 
}

int main() {
    int numero = 10;

    printf("Valor antes da funcao: %d\n", numero);

    incrementar(&numero);

    printf("Valor depois da funcao: %d\n", numero);

    return 0;
}