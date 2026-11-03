/*3. Números primos são os números naturais que têm apenas dois divisores distintos: 1 e
ele mesmo. Faça um programa que solicite um número natural, em seguida, informe o
número é primo ou não.
    ○ Exemplo 1, dado o termo 23, a saída esperada é sim.
    ○ Exemplo 2, dado o termo 77, a saída esperada é não.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i, eh_primo = 1;
    
    printf("Digite um número natural: ");
    scanf("%d", &num);

    if (num <= 1) {
        eh_primo = 0; 
    } 
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                eh_primo = 0; 
                break;
            }
        }
    }
    
    if (eh_primo)
    {
        printf("\nÉ primo.");
    } 
    else {
        printf("\nNão é primo.");
    }
    
    
    return 0;
}
