/*4. Dado uma matriz quadrada m de números inteiros e de tamanho n, calcule a soma das
diagonais principal e secundária.
    ○ Exemplo, dado:
        m = [
        [1, 2, 3, 4],

        [4, 3, 2, 1],
        [7, 8, 9, 6],
        [6, 5, 4, 3]
        ], a saída esperada é 16 e 20*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {4, 3, 2, 1},
        {7, 8, 9, 6},
        {6, 5, 4, 3}    
    };    
    int soma_principal = 0;
    int soma_secundaria = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; i < 4; i++){
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][4 - 1 - i];
        }
    }

    printf("Soma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundária: %d\n", soma_secundaria);

    return 0;
}
