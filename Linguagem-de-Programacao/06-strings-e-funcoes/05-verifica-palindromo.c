/*5. Verificação de Palíndromo:
    • Crie uma função chamada verifica_palindromo que recebe uma string e verifica se ela é um palíndromo
        (ou seja, a string pode ser lida da mesma forma de trás para frente).
    • A função deve retornar 1 se a string for um palíndromo e 0 caso contrário.*/

#include <stdio.h>

int tamanho(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    return i;
}

int verifica_palindromo(char str[]) 
{
    int inicio = 0;
    int fim = tamanho(str) - 1; 

    while (inicio < fim) 
    {
        if (str[inicio] != str[fim]) 
        {
            return 0;
        }
        inicio++; 
        fim--;
    }

    return 1;
}

int main()
{
    printf("%d\n", verifica_palindromo("arara"));  
    printf("%d\n", verifica_palindromo("radar"));
    printf("%d\n", verifica_palindromo("ana"));    
    printf("%d\n", verifica_palindromo("banana")); 
    printf("%d\n", verifica_palindromo("casa"));   

    return 0;
}