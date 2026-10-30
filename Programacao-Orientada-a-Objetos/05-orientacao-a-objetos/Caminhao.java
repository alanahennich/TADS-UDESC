public class Caminhao extends Veiculo{
    
    private int capacidadeTotal;
    private int capacidadeAtual;
    
    public Caminhao(int ano, int chassi, float preco, float semParar, int capacidadeTotal){
        super(ano, chassi, preco, semParar);
        this.capacidadeTotal = capacidadeTotal;
        this.capacidadeAtual = 0;
    }
    
    public void PagarPedagio(){
        float valor = 40;
        
        if(getSemParar() >= valor){
            setSemParar(getSemParar() - valor);
            System.out.println("Dinheiro: " + getSemParar());
        } else {
            System.out.println("Caminhao sem dinheiro suficiente!");
        }
    }
    
    public int getCapacidadeTotal(){
        return capacidadeTotal;
    }
    
    public void setCapacidadeTotal(int capacidadeTotal){
        this.capacidadeTotal = capacidadeTotal;
    }
    
    public int getCapacidadeAtual(){
        return capacidadeAtual;
    }
    
    public void setCapacidadeAtual(int capacidadeAtual){
        if(capacidadeAtual <= capacidadeTotal){
            this.capacidadeAtual = capacidadeAtual;
        } else {
            System.out.println("Carga excedida!");
        }
    }
    
}