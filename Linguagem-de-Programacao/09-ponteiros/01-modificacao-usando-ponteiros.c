// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
// Associe as variaveis aos ponteiros (use &). 
// Modifique os valores de cada variável usando os ponteiros. 
// Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>
int main(){
    int inteiro = 1;
    float real = 2.5;
    char letra = 'A';
    
    int *ptr_inteiro = &inteiro;
    float *ptr_real = &real;
    char *ptr_letra = &letra;

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n\n", letra);

    *ptr_inteiro = 20;
    *ptr_real = 21.8;
    *ptr_letra = 'B';

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n\n", letra);

    return 0;

}
