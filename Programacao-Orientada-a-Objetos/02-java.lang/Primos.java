/* Desenvolva um programa em Java capaz de imprimir todos os números primos menores que 100. 
Os números devem ser separados por espaços, e não deve haver quebra de linha entre eles 
(o número 1 NÃO É PRIMO). */

public class Primos {
    public static void main(String[] args) {
        String separador = "";

        for (int numero = 2; numero < 100; numero++) {
            boolean ehPrimo = true; 
            
            for (int divisor = 2; divisor < numero; divisor++) {
                
                if (numero % divisor == 0) {
                    ehPrimo = false; 
                    break; 
                }
            }

            if (ehPrimo) {
                System.out.print(separador + numero);
                separador = " ";
            }
        }
    }
}
