using System;


public class Fila{

private int[] valores;
private int primeiro; // inicio
private int ultimo; // fim
private int total;



public Fila()
{
    valores = new int[10];
    primeiro = 0;
    ultimo = 0;
    total = 0;

            




}


public void Inserir(int elemento)
{
    if (!Cheia())
    {
        valores[ultimo] = elemento;
        ultimo = (ultimo + 1) % valores.length;
        total++;
    }
    else { throw new RuntimeException("Fila cheia, nao da pra inserir"); };

}



public void Retirar(int* e)
{
    if (!Vazia())
    {
        e = valores[primeiro];
        primeiro = (primeiro + 1) % valores.length;
        total--;
    }

    else { throw new RuntimeException("Fila vazia, nao da pra remover "); };


}


public boolean Vazia()
{
    return (total == 0);


}

public boolean Cheia()
{
    return (total == (valores.length));


}

}
