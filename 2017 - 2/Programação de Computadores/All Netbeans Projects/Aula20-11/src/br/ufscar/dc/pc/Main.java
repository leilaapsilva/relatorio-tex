package br.ufscar.dc.pc;








public class Main {
    
    
    
    
    
    
    
    
    public static void main(String arg[]){
        
    Biblioteca Bco = new Biblioteca();
    
    Autor joao = new Autor("Joao Teixeira");
    Autor douglas = new Autor("Douglas Adam");
    
        Livro[] l = new Livro[4];
    
     l[0] = new Livro("Mente, cérebro e cognição", "Portugues", 2007, joao);
    
     l[1] = new Livro("O Guia do Mochileiro das Galáxias", "Portugues", 2011,new Autor("Douglas Adam"));
   
     l[2] = new Livro("A vida o universo e tudo mais","Portugues", 2009, new Autor("Douglas Adam"));
     
    
    Bco.AddLivros(l[0]);
    Bco.AddLivros(l[1]);
    Bco.AddLivros(l[2]);
    Bco.AddLivros(new Livro("Ensaio sobre a Cegueira", "Portugues", 2000, new Autor("José Camargo")));
    
    for(Livro livro : l){
        Bco.AddLivros(livro);
        
    }
    
   Bco.imprimeAc();
   Bco.imprimeAc(2001);
    
    
}
    
}
