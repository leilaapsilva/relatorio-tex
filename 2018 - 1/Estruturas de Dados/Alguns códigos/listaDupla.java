public class DoubleNode{
	private int elemento;
	private DoubleNode dir, esq;


}


public void Insere(){


}
public boolean IsEmpty(){
	return (this.dir == null || this.esq == null);


}

public void setElemento(int elemento){

	this.elemento = elemento;
	
}
public void setAnterior(DoubleNode esq){
	this.esq = esq;


}
public void setProximo(DoubleNode dir){
	this.dir = dir;
}

public int getElemento(){
	return this.elemento;
}
public DoubleNode getAnterior(){
	return this.esq;

}

public DoubleNode getProximo(){
	return this.dir;

}