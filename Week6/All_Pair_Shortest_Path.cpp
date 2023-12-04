#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int maxn = 100000;
int n, m;


vector<pair<int, int>> adj[maxn];

void dijkstra(int s){
    vector<long long> d(n+1, INF);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    q.push({0, s});
    while(!q.empty()){
        pair<int, int> top = q.top();
        q.pop();
        int u = top.second;
        int du = top.first;
        if(du > d[u]){
            continue;
        }
        for(auto it:adj[u]){
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << d[i] << " ";
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
    }
    for(int i=1; i<=n; i++){
        dijkstra(i);
        cout << endl;
    }



}
