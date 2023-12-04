#include<bits/stdc++.h>
using namespace std;

const int maxn = 100001;
int n, m, s, t;
const double INF = 1e7;

vector<pair<int, int>> adj[maxn];

void dijkstra(int s, int t){
    vector<long long> d(n+1, INF);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;


    Q.push({0, s});
    while(!Q.empty()){

        pair<int, int> top = Q.top();
        Q.pop();
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
                Q.push({d[v], v});

            }
        }
    }

    cout << d[t];

}

int main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});

    }
    cin>>s>>t;
    dijkstra(s, t);

    return 0;
}

