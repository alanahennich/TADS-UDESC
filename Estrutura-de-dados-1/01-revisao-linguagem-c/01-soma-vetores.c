/*1. Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
se a soma de qualquer par de números em v for igual a k.
    ○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17
*/

#include <stdio.h>
#include <stdbool.h>

bool encontrar_valor_k(int v[], int n, int k){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++)
        {
            if (v[i] + v[j] == k)
            {
                return true;
            }   
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int v[]={10,15,3,7};
    int n = 4, k = 17;

    if (encontrar_valor_k(v, n, k))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
