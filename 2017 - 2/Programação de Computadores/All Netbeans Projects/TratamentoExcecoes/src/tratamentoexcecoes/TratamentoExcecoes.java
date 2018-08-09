
package tratamentoexcecoes;


public class TratamentoExcecoes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int soma = 0;
        for(String s : args){
            int v;
            //try{ 
                v = Integer.parseInt(s); 
                if(v == 30){
                    v = 30/0;
                }
                     
        
            soma += v;
        
        } 
        System.out.println(soma);
            
          //  catch(NumberFormatException o) {
            //    v = 0;
            
          //  } 
           // catch(ArithmeticException o){
          //      v = 0;
          // 
    }
            
            }
          
        
        
        
        
        
    

