public class Radio{
    
    private String estacao;
    private int canal;
    private int volume;
    
    public Radio(String estacao){
        this.estacao = estacao;
        
        if(estacao.equals("AM")){
            this.canal = 20;
        } else if(estacao.equals("FM")){
            this.canal = 80;
        }
        
        this.volume = 0;
    }
    
    public void AumentarVolume(){
        volume = volume + 10;
        if(volume > 100){
            volume = 100;
        }
    }
    
    public void DiminuirVolume(){
        volume = volume - 10;
        if(volume < 0){
            volume = 0;
        }
    }
    
    public String getEstacao(){
        return estacao;
    }
    
    public void setEstacao(String estacao){
        this.estacao = estacao;
    }
    
    public int getCanal(){
        return canal;
    }
    
    public void setCanal(int canal){
        this.canal = canal;
    }
    
    public int getVolume(){
        return volume;
    }
    
    public void setVolume(int volume){
        this.volume = volume;
    }
    
}