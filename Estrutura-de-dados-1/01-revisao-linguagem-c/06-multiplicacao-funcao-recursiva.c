/*6. Faça um programa que solicite dois números positivos e, em seguida, exiba o produto
destes números. Não utilize o operador aritmético *. Ao invés disso, utilize uma função
recursiva para realizar este cálculo.
    ○ Exemplo, dado os números aleatório 7 e 3, a saída é 21.*/

#include <stdio.h>

int multiplicacao(int multiplicador, int multiplicando) {
    if (multiplicando == 0) {
        return 0;
    }
    
    int produto = 0;
    
    if(multiplicando > 0){
        multiplicando--;
        produto = multiplicador;
    } else if (multiplicando < 0) {
        multiplicando++;
        produto = -multiplicador;
    }

    return produto + multiplicacao(multiplicador, multiplicando);
}

int main() {
    int multiplicador, multiplicando, produto;

    printf("Informe o multiplicador ");
    scanf("%d", &multiplicador);

    printf("Informe o multiplicando ");
    scanf("%d", &multiplicando);

    produto = multiplicacao(multiplicador, multiplicando);

    printf("%d x %d = %d\n", multiplicador, multiplicando, produto);
}