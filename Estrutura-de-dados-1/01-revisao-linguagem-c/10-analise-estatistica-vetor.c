/* 10. Faça um programa que leia um conjunto de números inteiros e armazene-os em um
vetor. Em seguida, deve exibir as seguintes informações a partir dos valores do vetor: i)
mediana; ii) moda; iii) outliers (usando o método Z score); e iv) agrupamento dos
valores em primeiro, segundo e terceiro quartil. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double calcular_mediana(int *vetor, int n) {
    if (n % 2 != 0) {
        return vetor[n / 2];
    } else {
        return (vetor[(n / 2) - 1] + vetor[n / 2]) / 2.0;
    }
}

void calcular_moda(int *vetor, int n) {
    int max_freq = 0;
    
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (vetor[j] == vetor[i]) freq++;
        }
        if (freq > max_freq) {
            max_freq = freq;
        }
    }

    if (max_freq == 1) {
        printf("Moda: Amodal (nenhum elemento se repete)\n");
        return;
    }

    printf("Moda (frequencia = %d): ", max_freq);
    for (int i = 0; i < n; i++) {
        if (i == 0 || vetor[i] != vetor[i - 1]) {
            int freq = 0;
            for (int j = 0; j < n; j++) {
                if (vetor[j] == vetor[i]) freq++;
            }
            if (freq == max_freq) {
                printf("%d ", vetor[i]);
            }
        }
    }
    printf("\n");
}

void identificar_outliers(int *vetor, int n) {
    double soma = 0;
    for (int i = 0; i < n; i++) soma += vetor[i];
    double media = soma / n;

    double soma_variancia = 0;
    for (int i = 0; i < n; i++) {
        soma_variancia += pow(vetor[i] - media, 2);
    }
    double desvio_padrao = sqrt(soma_variancia / n);

    printf("Media: %.2f | Desvio Padrao: %.2f\n", media, desvio_padrao);

    if (desvio_padrao == 0) {
        printf("Outliers (Z-score > 2.0): Nenhum (desvio padrao zero)\n");
        return;
    }

    printf("Outliers (com |Z-Score| > 2.0):\n");
    int encontrou = 0;
    for (int i = 0; i < n; i++) {
        double z_score = (vetor[i] - media) / desvio_padrao;
        if (fabs(z_score) > 2.0) { 
            printf("  - Valor: %d (Z-Score: %.2f)\n", vetor[i], z_score);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("  Nenhum outlier detectado com o limiar Z > 2.0.\n");
    }
}

void calcular_quartis(int *vetor, int n) {

    double p1 = 0.25 * (n - 1);
    double p2 = 0.50 * (n - 1);
    double p3 = 0.75 * (n - 1);

    int idx1 = (int)p1;
    double q1 = vetor[idx1] + (p1 - idx1) * (vetor[idx1 + 1] - vetor[idx1]);

    int idx2 = (int)p2;
    double q2 = vetor[idx2] + (p2 - idx2) * (vetor[idx2 + 1] - vetor[idx2]);

    int idx3 = (int)p3;
    double q3 = (idx3 + 1 < n) ? vetor[idx3] + (p3 - idx3) * (vetor[idx3 + 1] - vetor[idx3]) : vetor[idx3];

    printf("Primeiro Quartil (Q1 - 25%%): %.2f\n", q1);
    printf("Segundo Quartil (Q2 - 50%% / Mediana): %.2f\n", q2);
    printf("Terceiro Quartil (Q3 - 75%%): %.2f\n", q3);
}

int main() {
    int n;

    printf("Digite a quantidade de elementos do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    int *vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os %d numeros inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    qsort(vetor, n, sizeof(int), comparar);

    printf("\n=== VETOR ORDENADO ===\n[ ");
    for (int i = 0; i < n; i++) printf("%d ", vetor[i]);
    printf("]\n\n");

    printf("=== RELATORIO ESTATISTICO ===\n");
    
    printf("i) MEDIANA: %.2f\n\n", calcular_mediana(vetor, n));

    printf("ii) MODA:\n");
    calcular_moda(vetor, n);
    printf("\n");

    printf("iii) OUTLIERS (Z-Score):\n");
    identificar_outliers(vetor, n);
    printf("\n");

    printf("iv) QUARTIS:\n");
    calcular_quartis(vetor, n);

    free(vetor);
    return 0;
}