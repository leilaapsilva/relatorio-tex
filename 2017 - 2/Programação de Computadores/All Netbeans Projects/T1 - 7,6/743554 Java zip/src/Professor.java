



/**
 *
 * @author João Vitor Azevedo Marciano - 743554
 * 
 * Proposta 
 * Implemente a classe Professor com os atributos: número de matrícula, 
 * nome do professor, nome do departamento e data de admissão (instância da
 * classe Data definida * na questão anterior).Inclua na classe um construtor 
 * para definir os atributos e o método void imprime() responsável
pela impressão das informações de um professor.

 */
public class Professor {
    private int numMatricula;
    private String nomeProfessor;
    private String nomeDept;
    private final Data admissao; /* Uma classe com este modificador [final] não pode ser estendida, isto é, 
    não pode ter classes que herdam dela. Isso é importante para garantir que uma determinada implementação
    não tenha seu comportamento modificado. Isso tem muito a ver com a imutabilidade.
    Houve aqui a escolha por utilizar o modificador, já que não há necessidade de a classe ser extendida no 
    exercicio, ao menos por enquanto.
 */    
    
    public Professor(int numMatricula, String nomeProfessor, String nomeDept, int dia, String mes, int ano) {
        this.numMatricula = numMatricula;
        this.nomeProfessor = nomeProfessor;
        this.nomeDept = nomeDept;
        admissao = new Data(dia,mes,ano);
       
        
        
    }

    public void imprime(){
        System.out.println(" ");
        System.out.println("Matricula: " + this.numMatricula);
        System.out.println("Nome do Professor: " + this.nomeProfessor);
        System.out.println("Departamento: " + this.nomeDept);
        System.out.println("Admissão: "+ this.admissao.getDia() + " de " + this.admissao.getMes() + " de " + this.admissao.getAno());
        System.out.println(" ");
        
        
    }
    
// Este main() representa alguns testes que foram feitos para garantir a 
// integridade do programa. Siga adiante para os Getters e Setters ^^ 

    public static void main(String[] args){
            
       Data datinha = new Data(06, "agosto", 1966);
            datinha.setAno(1999);
            datinha.setMes("um mes qualquer");
        //  datinha.imprime();
            
            
            Professor mario = new Professor(1,"jacan", "DepComp", 6, "Agosto", 1996);
            mario.setNomeDept("DM");
            mario.setNomeProfessor("Mariazinha");
            mario.setAdmissao(04,"Julho", 2010);
       //     mario.imprime();
            
            ConversorMonetario conv = new ConversorMonetario(3.40f, 3.35f);
            conv.setTaxaCompra(444.5f);
            conv.setTaxaVenda(99.9f);
         // conv.imprimeTaxas();
            
            Pessoa marcelinho = new Pessoa("Marcelinho", 80.0f, 1.80f);
            marcelinho.setPesoKg(130.0f);
            marcelinho.setAltura(1.60f);
        //  marcelinho.imprimeCategoria();
           
           
    }
    

    
    
    //Getters 
   
    
    public int getNumMatricula() {
        return this.numMatricula;
    }
            
    public String getNomeProfessor() {
        return this.nomeProfessor;
    }
      
    public String getNomeDept() {
        return this.nomeDept;
    }

    public Data getAdmissao() {
        return this.admissao;
    }

    
    // Setters 
   
    public void setNumMatricula(int numMatricula) {
        this.numMatricula = numMatricula;
    }
    
    public void setNomeProfessor(String nomeProfessor) {
        this.nomeProfessor = nomeProfessor;
    }

    public void setNomeDept(String nomeDept) {
        this.nomeDept = nomeDept;
    }

    
     public void setAdmissao(int dia, String mes, int ano) {
        this.admissao.setDia(dia);
        this.admissao.setMes(mes);
        this.admissao.setAno(ano);
                
    }
    
    
         
    
    
}
