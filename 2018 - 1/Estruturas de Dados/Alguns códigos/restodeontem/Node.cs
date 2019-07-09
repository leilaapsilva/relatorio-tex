using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node
{
	//	public int x;
	private string _valor;
	public string Valor
	{
		get{ return _valor; }
		set{_valor = value; }


	}

	private Node _proximo;
	public Node Proximo
	{
		get{ return _proximo;}
		set{ _proximo = value; }



	}
	//	public	Node next;






	//	public Node ()
	//	{

	//}
}


