public void Empilha(Pilha *p, char x, boolean DeuCerto){
	
	if(Cheia(p) == true)
	DeuCerto = false;
	else {
		Nodeptr pAux = NewNode();
		pAux-> Info = x;
		pAux-> Next = p.Topo;
		p.Topo = pAux;
		DeuCerto == true;
}

}
public void Desempilha(Pilha *p, char x, boolean DeuCerto){
	
	if(p.Vazia() == true)
	DeuCerto = false;
	else {
		x = p.Topo -> Info;
		Nodeptr pAux;
		pAux = p.Topo;
		p.Topo = p.Topo-> Next;
		DeleteNode(pAux);
		DeuCerto = true;
}

}
public void Cria(Pilha *p){
	p.Topo = null;



}
public boolean Vazia(Pilha *p){
	return (p.Topo == null);

}
public boolean Cheia(Pilha *p){
	return false;


}