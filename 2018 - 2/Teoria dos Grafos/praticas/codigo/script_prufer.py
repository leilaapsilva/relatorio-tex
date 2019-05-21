# -*- coding: utf-8 -*-

import networkx as nx
import matplotlib.pyplot as plt # utlizada para realizar a plotagem do grafo

def plot_weighted_graph(G):
    """
    Descrição
    ---------
    Plota um grafo ponderado G.
    """
    plt.figure();
    # obter posição dos nós
    pos = nx.spring_layout(G);
    # plotar vertices
    nx.draw_networkx_nodes(G, pos);
    # plotar rótulos dos vertices
    nx.draw_networkx_labels(G, pos);
    # plotar arestas 
    nx.draw_networkx_edges(G, pos);
    # obter dicionário com as arestas e seus respectivos pesos
    weights = { (u, v): data['weight'] for u, v, data in G.edges(data=True) }
    # plotar rótulos das arestas
    nx.draw_networkx_edge_labels(
        G, pos, edge_labels=weights, font_size=12, font_family='sans-serif');
    # plotar G
    plt.show();
    # fechar janela atual
    plt.close();
    

# criando novo grafo G vazio
G = nx.Graph();
# adicionando arestas e vertices a G
G.add_edge(1, 2, weight=5);
G.add_edge(2, 3, weight=8);
G.add_edge(1, 3, weight=6);
G.add_edge(3, 4, weight=7);
G.add_edge(2, 9, weight=2);
G.add_edge(5, 2, weight=3);
G.add_edge(1, 6, weight=12);
G.add_edge(3, 6, weight=6);
G.add_edge(3, 7, weight=2);
G.add_edge(8, 4, weight=4);
G.add_edge(8, 2, weight=1);
G.add_edge(1, 5, weight=3);
# calcular a MST de G
Gmst = nx.minimum_spanning_tree(G);
# plotar G
plot_weighted_graph(G);
# plotar a MST de G
plot_weighted_graph(Gmst);

# importar nossos algoritmos
from prufer import prufer_encode
from prufer import prufer_decode
# gerar o código a partir da MST
code = prufer_encode(Gmst);
# imprimir o código
print code;
# obter árvore a partir do código
T = prufer_decode(code);
# nova figura
plt.figure();
# plotar árvore 
nx.draw(T);
# exibir
plt.show();
# fechar janela atual
plt.close();

