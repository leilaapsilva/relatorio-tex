# -*- coding: utf-8 -*-

import string
import networkx as nx

def prufer_encode(T):
   
    # iniciando uma lista vazia    
    S = [];    
    # copiar T para não modificar grafo original
    G = T.copy();
    # enquanto houver mais de um único vertice
    while (len(G.nodes()) > 1):
        # obter as folhas de G
        leafs = [ v for v, d in G.degree().items() if d == 1 ];
        # obter a folha de menor rótulo
        u = min(leafs);
        # vertice incidente a folha de menor rótulo
        v = G.neighbors(u)[0]; # possui um único vertice incidente
        # adicionar o rotulo de v na lista S
        S.append(v);
        # remover u de G
        G.remove_node(u);
    
    # transforma cada rotulo em S em uma string 
    # e concatena todas as strings
    return string.join(map(str, S));
    
    
    
def prufer_decode(code):
    # converter a string code em uma lista de inteiros
    C = map(string.atoi, string.split(code, sep=" "));
    # número de vertices 
    n = len(C) + 1;
    # conjunto S dos números de 1 a n {1, 2, ..., n}
    S = range(1, n + 1);
    # árvore inicial T
    T = nx.Graph();
    # iniciar o conjunto de vertices |V| = n 
    T.add_nodes_from(S);

    # enquanto C não for vazio    
    while (C):
        # buscar em S o menor rótulo que não pertence a C
        s_min = min([ s for s in S if s not in C ]);
        # elemento mais a esquerda de C
        c_i = C[0];
        # adicionar a T a aresta definida por (c_i, s_min) 
        T.add_edge(*(c_i, s_min));
        # remover s_min de S
        S.remove(s_min);
        # remover c_i de C
        C = C[1:];
        
    return T;
    
    
    