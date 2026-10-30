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
