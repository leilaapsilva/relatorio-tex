package inout;

import java.util.InputMismatchException;
import java.util.Scanner;

class MyException1 extends Exception{


}

class MyException2 extends RuntimeException{


}

public class InOut {

    public static int quociente(int num, int den) throws MyException1 {
        // if(den == 0)
        //   return (int) Double.NaN;
        //else{
        if (den % 2 == 0) throw new MyException2();
        return num / den;
        // }

    }

    public static void main(String[] args) {

       boolean done  = false;
        
       
                
           done = false;
      
          while(!done){
        try {

            Scanner sc = new Scanner(System.in);

            System.out.print("Digite n1:");
            int n1 = sc.nextInt();
            System.out.print("Digite n2:");
            int n2 = sc.nextInt();

            int  res = quociente(n1, n2);

            System.out.printf("Resultado %d / %d = %d", n1, n2, res);
            System.out.println("");
            done  = true;

        } catch (ArithmeticException o) {
            System.out.println("Denominador não pode ser zero!");
        }
        
        catch(InputMismatchException o) {
            System.out.println("Denominador deve ser um inteiro!");
        }
        catch (MyException o){
            System.out.println("My Exception foi tratada");
            
            
        }
        catch(Exception o){
            System.out.println("Algo deu errado men");
            
        }

    }
          
    }
    }

