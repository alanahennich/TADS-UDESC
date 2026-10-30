// 1. Crie uma função recursiva que calcule a soma de todos os números de 1 até n.
#include <stdio.h>

int SomaRecursiva(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + SomaRecursiva(n - 1);
    }
}

int main() {
    int numero = 5;
    int resultado = SomaRecursiva(numero);
    
    printf("A soma de 1 ate %d eh: %d\n", numero, resultado);
    
    return 0;
}