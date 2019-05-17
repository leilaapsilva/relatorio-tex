/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Pessoa {
    
    protected String nome;
    Data dataNasc;
    protected String endereco;
    
    public Pessoa(String nome, int dia, String mes, int ano, String endereco){
        this.nome = nome;
        dataNasc = new Data(dia,mes,ano);
       /* dataNasc.setDia(dia);
        dataNasc.setMes(mes);
        dataNasc.setAno(ano); */
       this.endereco = endereco;
                
        
    }
    
    public void imprime(){
        System.out.println("---------------------------------------");
        System.out.println("Nome: " + this.nome);
        dataNasc.imprime();
        System.out.println("Endereco: " + this.endereco);
        System.out.println("---------------------------------------");

        
        
        
    }    
//setters
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setDataNasc(int dia, String mes, int ano) {
        this.dataNasc.setDia(dia);
        this.dataNasc.setMes(mes);
        this.dataNasc.setAno(ano);
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
    
    //getters

   // public Data getDataNasc() {
    //    return dataNasc;
    //}

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }
    
    
    
}
