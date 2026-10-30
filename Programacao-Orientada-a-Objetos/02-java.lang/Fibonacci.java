/* Desenvolva um programa em Java capaz de imprimir os números da sequência de Fibonacci 
até 100 (não é para imprimir os cem primeiros números da sequência, apenas é para imprimir 
os números até o próximo ultrapassar cem). Os números devem ser separados por espaços, 
e não deve haver quebra de linha entre eles. */

public class Fibonacci {
    public static void main(String[] args) {
        int a = 0;
        int b = 1; 
        int proximo; 

        System.out.print(a);

        while (b <= 100) {
            System.out.print(" " + b);
            
            proximo = a + b;
            
            a = b;
            b = proximo;
        }
    }
}