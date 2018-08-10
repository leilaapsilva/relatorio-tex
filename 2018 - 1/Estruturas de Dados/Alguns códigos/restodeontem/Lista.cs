using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;




	public class Lista
	{

	/*

	Node inicio;
		
		public Lista ()
		{
		}
	

	public void create(Lista lista){
		lista.inicio = null;
	}

	void inserir(Lista lista,int elemento){
		Node novo = new Node();

		novo.next = null;
		novo.x = elemento;
		if(lista.inicio == null){
			lista.inicio = novo;
		}
		else{
			aux = lista.inicio;
			while(aux.next != null){
				aux = aux.next;
			}
			aux.next = novo;
		}

	}
	bool isEmpty(Lista lista){
		return (lista.inicio == null);
	}
	int retirar(Lista lista){
		Node aux;
		aux = lista.inicio;
		int elemento = aux.x;
		lista.inicio = aux.next;
	//	free(aux);
		aux = null;
		return elemento;
	}
	void listar(Lista lista){

	}
*/

	public Node _cabeca, _cauda;


	public void Insere(string elemento)
	{
		//Criar No
		Node novoNo = new Node();
		novoNo.Valor = elemento;

		//first: esse é o primeiro elemento?
		if (_cabeca == null) {
			_cabeca = novoNo;
			
			
		} else 
		{
			_cauda.Proximo = novoNo;
			
		}


		_cauda = novoNo;
	
	}

	/* public bool buscaNo(int n){
		Node p; bool achou = false;

	} */


	public void Remove(int indice)
	{
	//	Node noParaRemover = this.BuscaNo (indice);
	//	Node noAnterior = this.buscaNo (indice - 1);

		// refazer os encadeamentos
	//	noAnterior.Proximo = noParaRemover.Proximo; 
	//	noParaRemover.Proximo = null;




	}

}

