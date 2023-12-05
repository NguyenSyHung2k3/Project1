# Week6

## All_Pair_Shortest_Path
Given a directed graph G = (V,E) in which V = {1,2,...,n) is the set of nodes.
Each arc (u,v) has a non-negative weight w(u,v).
Given two nodes s and t of G. Find the shortest path from s to t on G. 

Input:
* Line 1: contains two integers n and m which are the number of nodes and the number of arcs of G (1 <= n <= 100000)
* Line i + 1(i = 1,2,...,m): contains 3 integers u, v, w in which w is the weight of arc(u,v) (0 <= w <= 100000)
* Line m+2: contains two integers s and t

**Write the weight of the shortest path found or write -1 if no path from s to t was found**

## Max_Flow

Given a network G = (V, E) which is a directed weighted graph. 
Node s is the source and node t is the target. 
c(u,v) is the capacity of the arc (u,v). 
Find the maximum flow on G.

Input
* Line 1: two positive integers N and M (1 <= N <= 10^4, 1 <= M <= 10^6)
* Line 2: contains 2 positive integers s and t
* Line i+2 (I = 1,. . ., M): contains two positive integers u and v which are endpoints of ith arc

**Write the value of the max-flow found**

## Shortest_Path_Directed_Graph

Given a directed graph G = (V, E) in which V = {1, 2, ..., n} is the set of nodes, and w(u,v) is the weight (length) of the arc(u,v).
Compute d(u,v) - the length of the shortest path from u to v in G, for all u,v in V.

Input:
* Line 1: contains 2 positive integers n and m (1 <= n,m <= 10000)
* Line i+1 (i = 1, 2, ..., m): contains 3 positive integers u, v, w in which w is the weight of the arc (u,v) (1 <= w <= 1000)

**Line i (i = 1, 2, ..., n): wirte the ith row of the matrix d (if there is not any path from node i to node j, then d(i,j) = -1)**

