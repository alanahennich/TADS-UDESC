public class Moto extends Veiculo{
    
    private int cilindradas;
    
    public Moto(int ano, int chassi, float preco, float semParar, int cilindradas){
        super(ano, chassi, preco, semParar);
        this.cilindradas = cilindradas;
    }
    
    public void PagarPedagio(){
        float valor = 10;
        
        if(getSemParar() >= valor){
            setSemParar(getSemParar() - valor);
            System.out.println("Dinheiro: " + getSemParar());
        } else {
            System.out.println("Moto sem dinheiro suficiente!");
        }
    }
    
    public int getCilindradas(){
        return cilindradas;
    }
    
    public void setCilindradas(int cilindradas){
        this.cilindradas = cilindradas;
    }
    
}