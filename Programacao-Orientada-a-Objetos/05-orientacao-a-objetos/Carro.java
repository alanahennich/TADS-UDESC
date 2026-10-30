public class Carro extends Veiculo{
    Radio frequencia = new Radio("FM");
    Radio amplitude = new Radio("AM");
    
    private boolean automatico;
    
    public Carro(int ano, int chassi, float preco, float semParar, boolean automatico){
        super(ano, chassi, preco, semParar);
        this.automatico = automatico;
    }
    
    public void PagarPedagio(){
        float valor = 20;
        
        if(getSemParar() >= valor){
            setSemParar(getSemParar() - valor);
            System.out.println("Dinheiro: " + getSemParar());
        } else {
            System.out.println("Carro sem dinheiro suficiente!");
        }
    }
    
    public boolean isAutomatico(){
        return automatico;
    }
    
    public void setAutomatico(boolean automatico){
        this.automatico = automatico;
    }
    
    public Radio getFrequencia(){
        return frequencia;
    }
    
    public void setFrequencia(Radio frequencia){
        this.frequencia = frequencia;
    }
    
    public Radio getAmplitude(){
        return amplitude;
    }
    
    public void setAmplitude(Radio amplitude){
        this.amplitude = amplitude;
    }
    
}