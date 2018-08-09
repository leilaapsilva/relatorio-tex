/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contanobanco;

/**
 *
 * @author Lobisgato
 */
public class ContaBanco {
    
    public int numConta;
    protected String tipo; // cc ou cp
    private String dono;
    private float saldo;
    private boolean status;
    
    
    public ContaBanco(){
        this.saldo = 0.0f;
        this.status = false;
        
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }
    public int getNumConta() {
        return numConta;
    }

    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }
    public String getDono() {
        return dono;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }
    public float getSaldo() {
        return saldo;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
    
    
    
    
    
    
    public void abrirConta(String t){
        setTipo(t);
        setStatus(true);
        if("CC".equals(t)){
            this.setSaldo(50.0f);
        }
        else if("CP".equals(t))
            this.setSaldo(150.0f);
                
        this.status = true;
    }
    public void fecharConta(){
        if(this.getSaldo() > 0)
            System.out.println("Conta com Dinheiro");
        else if(this.getSaldo() < 0)
            System.out.println("Voce nos deve");
        else {
        this.status = false;
            System.out.println("fechada");
        }
        
    }
    public void depositar(float value){
       if(this.status == true)
           this.setSaldo(getSaldo() + value);
       else
            System.out.println("Impossivel Depositar");
       
    }
    
    public void sacar(float value){
    // if
        if(this.status){
            if(this.getSaldo() >= value)
                setSaldo(getSaldo() - value);
            else
                System.out.println("Saldo Insuficiente");
        }
            else
                System.out.println("Impossível Sacar");
        
        
                
        }
            
            
        public void pagarMensalidade(){
            float v = 0;
            if ("CC".equals(getTipo())) {
                v = 12;
            }
            else if ("CP".equals(tipo)) {
                v = 20;
            }
            if(status)
                if (saldo > v) {
                    saldo = saldo - v;
                   }
                else   System.out.println("Saldo Insuficiente;");
                
            else    System.out.println("Impossivel Pagar");
            
    }

    void estadoAtual() {
        System.out.println("Conta " + getNumConta());
        System.out.println("Tipo: " + getTipo());
        System.out.println("Dono: " + getDono());
        System.out.println("Saldo: " + getSaldo());
        System.out.println("Status: " + status);
        System.out.println(" ");
    }
    
    }
            
            
    
            
  
