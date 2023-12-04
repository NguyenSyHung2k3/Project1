#include<bits/stdc++.h>
using namespace std;

int n, m;
int parent[100000], sz[100000];

struct edge{
    int u, v;
    int w;
};

vector<edge> adj;

void make_set(){
    for(int i=1; i<=n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

bool cmp(edge e1, edge e2){
    return e1.w < e2.w;
}

int find_par(int v){
    if(v == parent[v]) return v;
    return parent[v] = find_par(parent[v]);
}

void check(int a, int b){
    if(find_par(a) == find_par(b)){
        return ;
    }
    a = parent[a];
    b = parent[b];
    if(sz[b] > sz[a]){
        swap(a, b);
    }
    sz[a] += sz[b];
    parent[b]=a;
}

void kruskal(){
    vector<edge> mst;
    long long d=0;
    sort(adj.begin(), adj.end(), cmp);
    for(int i=0; i<m; i++){

        if(find_par(adj[i].u) != find_par(adj[i].v)){
            check(adj[i].u, adj[i].v);
            d+=adj[i].w;
        }

    }
    cout << d << endl;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        edge e;
        e.u=u;
        e.v=v;
        e.w=w;
        adj.push_back(e);
    }

    make_set();
    kruskal();

    return 0;
}

