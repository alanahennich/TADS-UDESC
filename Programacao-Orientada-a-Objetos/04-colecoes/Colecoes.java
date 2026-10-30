/*Criar um programa em Java com blocos independentes de código (switch case). 
O programa deve obedecer a seguinte ordem para cada opção numérica fornecida como entrada:

1. Ordenação:
    Leia um número inteiro positivo n. 
    Em seguida, leia uma sequência de n números inteiros. 
    Imprima os números em ordem crescente, com um espaçamento simples entre cada número.
    
2. Construção de Matriz
    Leia dois números inteiros positivos, n e m. 
    Em seguida leia uma quantidade de n × m números. 
    Considere esses números como elementos de uma matriz:
    n representa as linhas de uma matriz.
    m representa as colunas de uma matriz.
    Imprima a matriz de forma convencional:
    Os números da mesma linha devem estar separados por espaços. 
    Ao imprimir o último número de uma linha, faça uma quebra de linha.

3. Determinante da Matriz
    Leia um número inteiro positivo n. 
    Em seguida leia uma quantidade de n² números. 
    Considere esses números como elementos de uma matriz quadrada (An×n). 
    Calcule e imprima o determinante da matriz.

4. Soma de Matrizes
    Faça a leitura de duas matrizes:
    Matriz An×m.
    Matriz Bn×m.
    Some as matrizes A e B.
    Imprima a matriz resultante C da soma.

5. Multiplicação de Matrizes
    Faça a leitura de duas matrizes:
    Inicialmente leia um número m e n.
    Depois leia a Matriz An×m.
    Depois leia a Matriz Bm×n.
    Multiplique as matrizes A e B.
    Imprima a matriz resultante C da multiplicação.
    
Observações:
    Todas as impressões devem pular linha.
    O código deve priorizar a utilização de tipos orientadas a objetos (obs: Integer ao invés de int, 
    contudo em algumas situações a utilização de tipos primitidos é permitida, usando-os dentro de laços 
    de repetição por exemplo). O não cumprimento dessa regra resultará em descontos na nota final, 
    mesmo que o sistema avalie seu código com nota 10 (dez). 
    Caso um número seja informado ao switch case fora do intervalo permitido, o programa deve simplesmente 
    encerrar a execução.  */

import java.util.Arrays;
import java.util.Scanner;

public class Colecoes {

    public static void colecoes(String[] args) {
        Scanner scanner = new Scanner(System.in);

        if (!scanner.hasNextInt()) {
            scanner.close();
            return;
        }

        Integer opcao = scanner.nextInt();

        switch (opcao) {
            case 1:
                Integer n1 = scanner.nextInt();
                Integer[] array = new Integer[n1];
                
                for (int i = 0; i < n1; i++) {
                    array[i] = scanner.nextInt();
                }
                
                Arrays.sort(array);
                
                for (int i = 0; i < n1; i++) {
                    System.out.print(array[i]);
                    if (i < n1 - 1) {
                        System.out.print(" ");
                    }
                }
                System.out.println();
                break;

            case 2:
                Integer n2 = scanner.nextInt();
                Integer m2 = scanner.nextInt();
                
                Integer[][] matriz2 = lerMatriz(scanner, n2, m2);
                imprimirMatriz(matriz2, n2, m2);
                break;

            case 3:
                Integer n3 = scanner.nextInt();
                Integer[][] matriz3 = lerMatriz(scanner, n3, n3);
                
                Integer determinante = calcularDeterminante(matriz3, n3);
                System.out.println(determinante);
                break;

            case 4:
                Integer n4 = scanner.nextInt();
                Integer m4 = scanner.nextInt();
                
                Integer[][] matrizA4 = lerMatriz(scanner, n4, m4);
                Integer[][] matrizB4 = lerMatriz(scanner, n4, m4);
                Integer[][] matrizC4 = new Integer[n4][m4];

                for (int i = 0; i < n4; i++) {
                    for (int j = 0; j < m4; j++) {
                        matrizC4[i][j] = matrizA4[i][j] + matrizB4[i][j];
                    }
                }
                
                imprimirMatriz(matrizC4, n4, m4);
                break;

            case 5:
                Integer m5 = scanner.nextInt();
                Integer n5 = scanner.nextInt();
                
                Integer[][] matrizA5 = lerMatriz(scanner, n5, m5);
                Integer[][] matrizB5 = lerMatriz(scanner, m5, n5);
                Integer[][] matrizC5 = new Integer[n5][n5];

                for (int i = 0; i < n5; i++) {
                    for (int j = 0; j < n5; j++) {
                        matrizC5[i][j] = 0; 
                        for (int k = 0; k < m5; k++) {
                            matrizC5[i][j] += matrizA5[i][k] * matrizB5[k][j];
                        }
                    }
                }
                
                imprimirMatriz(matrizC5, n5, n5);
                break;

            default:
                break;
        }

        scanner.close();
    }

    private static Integer[][] lerMatriz(Scanner scanner, Integer linhas, Integer colunas) {
        Integer[][] matriz = new Integer[linhas][colunas];
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = scanner.nextInt();
            }
        }
        return matriz;
    }


    private static void imprimirMatriz(Integer[][] matriz, Integer linhas, Integer colunas) {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                System.out.print(matriz[i][j]);
                if (j < colunas - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }


    private static Integer calcularDeterminante(Integer[][] matriz, Integer n) {
        if (n == 1) {
            return matriz[0][0];
        }
        if (n == 2) {
            return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
        }

        Integer det = 0;
        
        for (int i = 0; i < n; i++) {
            Integer[][] subMatriz = new Integer[n - 1][n - 1];
            
            for (int j = 1; j < n; j++) {
                int colCount = 0; 
                for (int k = 0; k < n; k++) {
                    if (k == i) continue;
                    subMatriz[j - 1][colCount] = matriz[j][k];
                    colCount++;
                }
            }
            
            Integer sinal = (i % 2 == 0) ? 1 : -1;
            det += sinal * matriz[0][i] * calcularDeterminante(subMatriz, n - 1);
        }
        
        return det;
    }
}
