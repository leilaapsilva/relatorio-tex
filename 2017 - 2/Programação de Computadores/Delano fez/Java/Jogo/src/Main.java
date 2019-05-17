
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int h, m;
        
        System.out.print("Digite 1o Horário (Hora, Minuto): ");
        h = sc.nextInt();
        m = sc.nextInt();
        
        Tempo t1 = new Tempo(h, m);
        
        System.out.print("Digite 2o Horário (Hora, Minuto): ");
        h = sc.nextInt();
        m = sc.nextInt();
        
        Tempo t2 = new Tempo(h, m);
        Tempo d1 = t1.diferenca(t2);
        d1.imprime();
    }
}
