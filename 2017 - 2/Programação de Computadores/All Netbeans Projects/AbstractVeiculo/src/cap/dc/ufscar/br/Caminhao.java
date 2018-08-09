package cap.dc.ufscar.br;



public class Caminhao extends Veiculo{
    
    private int numeroEixos;

    public Caminhao(int ano, String modelo, String marca, float motor, int numeroEixos) {
        super(ano, modelo, marca, motor);
        this.numeroEixos = numeroEixos;
        
    }

    public int getNumeroEixos() {
        return numeroEixos;
    }

    public void setNumeroEixos(int numeroEixos) {
        this.numeroEixos = numeroEixos;
    }
    
    
    @Override
   public void imprime(){
       System.out.println("Ano : " + this.ano);
       System.out.println("Modelo: " + this.modelo);
       System.out.println("Marca: " + this.marca);
       System.out.println("Motor: " + this.motor);
       System.out.println("Numero de eixos: " + this.numeroEixos);
       
   } 

    @Override
    public int compareTo(Veiculo o) {
        return this.ano - o.ano;
        
            
    }
    
    
    
    
    
    
}
