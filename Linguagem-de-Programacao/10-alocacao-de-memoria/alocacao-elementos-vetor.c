/* Implemente um programa que que:
    1. Solicita ao usuário a quantidade inicial de elementos que deseja armazenar em um
    vetor de inteiros.
    2. Aloca dinamicamente memória suficiente para esse vetor usando malloc.
    3. Permite que o usuário preencha os elementos do vetor.
    4. Pergunta ao usuário a quantidade de elementos para adicionar ao vetor original.
    5. Realoca a memória do vetor usando realloc para acomodar os novos elementos.
    6. Após a inserção de todos os elementos, exiba o conteúdo completo do vetor.
    7. Libera a memória alocada ao final do programa.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;       
    int n, m, i;      

    printf("Quantos elementos quer alocar?\n");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nQuantos elementos deseja ADICIONAR ao vetor? ");
    scanf("%d", &m);

    vetor = (int *) realloc(vetor, (n + m) * sizeof(int));

    printf("Digite os %d novos elementos:\n", m);
    for (i = n; i < n + m; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nConteudo completo do vetor:\n");
    for (i = 0; i < n + m; i++) {
        printf("[ %d ]", vetor[i]);
    }

    free(vetor);
    vetor = NULL; 

    return 0;
}
