/* Desenvolva um programa em Java capaz de imprimir todas as tabuadas no intervalo de 1 a 10. 
A formatação da impressão deve seguir o padrão: "N x 1 = N" (substituindo "N" pelo número da 
tabuada). Ao final de cada tabuada, uma linha deve ser pulada. */

public class Tabuada {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                System.out.println(i + " x " + j + " = " + (i * j));
            }
            System.out.println();
        }
    }
}