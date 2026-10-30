public class Veiculo{
    
    private int ano;
    private int chassi;
    private float preco;
    private float quilometragem;
    private float semParar;
    
    public Veiculo(int ano, int chassi, float preco, float semParar){
        this.ano = ano;
        this.chassi = chassi;
        this.preco = preco;
        this.quilometragem = 0;
        this.semParar = semParar;
    }
    
    public void PagarPedagio(){
    }
    
    public int getAno(){
        return ano;
    }
    
    public void setAno(int ano){
        this.ano = ano;
    }
    
    public int getChassi(){
        return chassi;
    }
    
    public void setChassi(int chassi){
        this.chassi = chassi;
    }
    
    public float getPreco(){
        return preco;
    }
    
    public void setPreco(float preco){
        this.preco = preco;
    }
    
    public float getQuilometragem(){
        return quilometragem;
    }
    
    public void setQuilometragem(float quilometragem){
        this.quilometragem = quilometragem;
    }
    
    public float getSemParar(){
        return semParar;
    }
    
    public void setSemParar(float semParar){
        this.semParar = semParar;
    }
    
}