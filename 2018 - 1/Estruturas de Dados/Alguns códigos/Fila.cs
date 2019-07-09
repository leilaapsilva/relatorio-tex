struct Node{
	char Info;
	NodePtr Next;


};

struct Fila{
	NodePtr inicio;
	NodePtr final;  // com fila vazia, ambos apontam pra null;
//	int qtdElementos;

};

public void Insere(Fila *f, char x, boolean DeuCerto){
if(Cheia(f) == true)
	DeuCerto = false;
	else{
		paux = newNode();
		paux->Next = null;
		final-> Next = paux;
		final = paux;

	}

}
public void Retira(Fila *f, char x, boolean DeuCerto){
		if(Vazia(f)
			DeuCerto = false;
			else{
				
					paux = f.inicio;
					f.inicio = f.Next;
					deleteNode(paux);
}
}
public boolean Cheia(Fila *f){
	return false;

}
public boolean Vazia(Fila *f){
	if(f.inicio == null && f.final == null)
	return true;
	else{return false;}

}
public void Cria(Fila *f){
		f.inicio  = null;
		  f.final = null;


}