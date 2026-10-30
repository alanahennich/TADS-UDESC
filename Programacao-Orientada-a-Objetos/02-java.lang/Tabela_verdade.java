/* Desenvolva um programa em Java capaz de imprimir uma Tabela Verdade para a seguinte expressão: (X e Y) ou Z. A Tabela Verdade deve mostrar todas as combinações possíveis de true e false para as variáveis e seus respectivos resultados. Por exemplo:
    - false e false ou false = false
    - false e false ou true = true
    - … (continue com as outras combinações com base no sistema binário */

    public class Tabela_verdade {
    public static void main(String[] args) {
        boolean[] valores = {false, true};
        
        System.out.println("Tabela verdade:");
        
        for (boolean x : valores){
            for (boolean y : valores){
                for (boolean z : valores){
                    boolean resultado = (x && y) || z;
                    
                    System.out.println( x + " e " + y + " ou " + z + " = " + resultado);
                }
            }
        }
    }
}
