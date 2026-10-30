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
