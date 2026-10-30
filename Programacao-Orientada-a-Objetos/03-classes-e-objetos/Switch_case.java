/* Criar um programa em Java com blocos independentes de código (switch case). 
O programa deve obedecer a seguinte ordem para cada opção numérica fornecida como entrada:

1. Leitura e classificação de um número:
    - Leia um número inteiro.
    - Se o número for maior que 10, imprima "MAIOR".
    - Caso contrário, imprima "MENOR".

2. Manipulação de um número:
    - Leia um número inteiro.
    - Se for múltiplo de 2:
        Multiplique o número por 5.
    - Se for múltiplo de 3:
        Subtraia 1 do número.
    
    - Se não for múltiplo de 2 e nem de 3:
        Não faça nada.
    - Imprima o resultado final do número.

3. Leitura de palavras:
    - Leia um número inteiro positivo.
    - Leia uma quantidade de palavras (String) igual ao numero informado.
    - Imprima as palavras separadas por espaço, da última para a primeira.

4. Cálculo do Máximo Divisor Comum (MDC):
    - Leia dois números inteiros positivos.
    - Calcule o MDC entre os dois números.
    - Imprima o MDC.

5. Soma de números:
    - Leia vários números inteiros até realizar a leitura de um não número.
    - Calcule a soma de todos os números lidos.
    - Imprima a soma final.

OBSERVAÇÕES:
    - Todas as impressões devem pular linha.
    - Caso um número seja informado ao switch case fora do intervalo permitido, 
    o programa deve simplesmente encerrar a execução. 
*/

import java.util.Scanner;

public class Switch_case {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        if (scanner.hasNextInt()) {
            int opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    int n1 = scanner.nextInt();
                    if (n1 > 10) {
                        System.out.println("MAIOR");
                    } else {
                        System.out.println("MENOR");
                    }
                    break;

                case 2:
                    int n2 = scanner.nextInt();
                    
                    boolean isMultiplo2 = (n2 % 2 == 0);
                    boolean isMultiplo3 = (n2 % 3 == 0);

                    if (isMultiplo2) {
                        n2 *= 5;
                    }
                    if (isMultiplo3) {
                        n2 -= 1;
                    }
                    
                    System.out.println(n2);
                    break;

                case 3:
                    int qtdPalavras = scanner.nextInt();
                    String[] palavras = new String[qtdPalavras];
                    
                    for (int i = 0; i < qtdPalavras; i++) {
                        palavras[i] = scanner.next();
                    }
                    
                    StringBuilder resultado = new StringBuilder();
                    for (int i = qtdPalavras - 1; i >= 0; i--) {
                        resultado.append(palavras[i]);
                        if (i > 0) {
                            resultado.append(" ");
                        }
                    }
                    System.out.println(resultado.toString());
                    break;

                case 4:
                    int a = scanner.nextInt();
                    int b = scanner.nextInt();
                    
                    while (b != 0) {
                        int temp = b;
                        b = a % b;
                        a = temp;
                    }
                    System.out.println(a);
                    break;

                case 5:
                    int soma = 0;
                    
                    while (scanner.hasNextInt()) {
                        soma += scanner.nextInt();
                    }
                    System.out.println(soma);
                    break;

                default:
                    break;
            }
        }

        scanner.close();
    }
}