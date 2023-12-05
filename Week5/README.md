# Week5

## BFS

Given undirected graph G = (V,E) in which V = {1, 2, ..., n} is the set of nodes, and E is the set of m edges.
Write a program that computes the sequence of nodes visited using a BFS algorithm (the nodes are considered in a lexicographic order)

Input:
* Line 1: contains 2 integers n and m which are the number of nodes and the number of edges
* Line i+1 (i = 1, ..., m): contains 2 positive integers u and v which are the end points of the ith edge

Output:
**Write the sequence of nodes visited by a BFS procedure (nodes a are separated by a SPACE character)**

## DFS

Given a undirected graph =(V,E) in which V = {1,2,..,n} is the set of nodes. 
Write a program that visit nodes of G by a DFS (consider a lexicorgraphic order of nodes).

Input:
* Line 1: contains 2 integers n and m (1 <= n,m <= 100000)
* Line i+1: contains u and v which are two end-points of the ith edge

Output:
**Sequence of nodes visited by DFS**

## Hamilton

Given an undirected graph G = (V,E).
 Write a program to check if G is a Hamiltonian graph.

Input:
* Line 1: a positive integer T (number of graphs)
Subsequent lines are information about T graphs, each has the following format:
* Line 1: n and m (number of nodes and edges)
* Line i+1 (i = 1, 2, ..., m): u and v : two end points of the ith edge

Output:
**In the ith line, write 1 if the corresponding is a Hamiltonian graph, and write 0, otherwise**

## Spanning_Tree

Given a undirected connected graph G=(V,E) where V={1,…,N}. 
Each edge (u,v)∈E(u,v)∈E has weight w(u,v)w(u,v). 
Compute minimum spanning tree of G.

Input:
* Line 1: N and M (1≤N,M≤10^5) in which NN is the number of nodes and MM is the number of edges.
* Line i+1 (i=1,…,M): contains 3 positive integers u, v, and w where w is the weight of edge (u,v)

Output:
**Write the weight of the minimum spanning tree found.**