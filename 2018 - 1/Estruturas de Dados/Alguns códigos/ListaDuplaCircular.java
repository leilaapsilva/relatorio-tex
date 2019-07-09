public class ListaDuplaCircular{
	private DoubleNode inicio;

public ListaDuplaCircular(){
	this.inicio = null;
}

public boolean isEmpty(){
	return (this.inicio == null);

}
public void Inserir(int elemento){
	
		DoubleNode novo = new DoubleNode();
		novo.setElemento(elemento);
	if(this.isEmpty()){
		novo.setProximo(novo);
		novo.setAnterior(novo);
		inicio = novo;
	}
	else{
		DoubleNode temp = inicio;
		while(temp.getProximo() != inicio){
			temp = temp.getProximo();
		}
		inicio.setAnterior(novo); 
		temp.setProximo(novo);
		novo.setAnterior(temp);
		novo.setProximo(inicio);

	}


}
public void exibirNaOrdem(){
	DoubleNode aux;
	aux = inicio;
	do{
		System.out.println("Elemento da lista = "
		 + aux.getElemento());




	}while(aux != inicio);

}

























public void exibirnaOrdemInversa(){
	DoubleNode aux = inicio;
	do{
		aux = aux.getAnterior();
		System.out.println("Elemento da lista = "
		 + aux.getElemento());




	}while(aux != inicio);


}
}