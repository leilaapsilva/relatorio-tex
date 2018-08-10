public class myApp{



	public static void main(String args[]){
ListaDuplaCircular lista = new ListaDuplaCircular();

lista.inserir(87);
lista.inserir(8237);
lista.inserir(857);
lista.inserir(973);
lista.inserir(12);


lista.exibirNaOrdem();
System.out.println("--------------------");
lista.exibirnaOrdemInversa();



	}
}