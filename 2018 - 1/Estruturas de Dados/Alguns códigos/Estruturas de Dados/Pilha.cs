using System;
using System.Diagnostics;

public class Pilha
{
    int[] elementos;
    int topo;
	public Pilha() // cria 
	{   elementos = new int[10];
        topo = -1; // posicao pilha vazia
	}
    public void Empilha(Pilha p, char x, bool DeuCerto) {
        if (this.Cheia() == false)
        {
            topo++;
            elementos[topo];
        }
        else { Debug.WriteLine("ahbwhabw");        }
    }
    public void Desempilha(Pilha p, int x, bool DeuCerto) {
        x = elementos[topo];
        topo--; // return x ?


    }

    public void Vazia() {
        return (topo == -1);

    }
    public void Cheia() {
        return (topo == 9 /* elementos.length - 1*/);
        
    }
}
