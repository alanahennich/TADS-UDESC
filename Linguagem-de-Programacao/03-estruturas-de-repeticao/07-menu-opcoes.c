/*Crie um menu de opções que deve ser exibido pelo menos uma vez. 
O usuário terá as seguintes opções:
    • 1 - somar
    • 2 - subtrair
    • 3 - multiplicar
    • 4 - dividir
    • 5 - sair
• Sempre que o usuário escolher uma opção, a operação deve ser realizada e o
resultado deve ser exibido na tela. O usuário deve voltar ao menu depois de
visualizar o resultado da operação e ter a opção de realizar uma outra operação.
• O programa deve encerrar a execução somente se o usuário escolher a opção
sair.
• Caso o usuário informe uma opção inválida, deve voltar ao menu para digitar
a opção novamente.*/

#include <stdio.h>

int main() {
    int opcao;
    float x, y, resultado;

    do {
        printf("\nMENU\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois valores: ");
            scanf("%f %f", &x, &y);
        }

        switch (opcao) {
            case 1:
                resultado = x + y;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = x - y;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = x * y;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (y != 0) {
                    resultado = x / y;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}