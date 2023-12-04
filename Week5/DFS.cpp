#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> adj[10000];
bool visit[10000];

void dfs(int i) {

    visit[i] = true;
    cout << i << " ";
    sort(adj[i].begin(), adj[i].end());
    for(int v : adj[i]){
        if(!visit[v]){
            dfs(v);
        }
    }


}

int main() {
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<=n; i++){
        visit[i] = false;
    }
    for (int i = 1; i <= n; ++i){
        if (!visit[i]){
            dfs(i);
        }
    }

}

