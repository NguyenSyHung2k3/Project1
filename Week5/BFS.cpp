#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> adj[10000];
bool visit[10000];

void bfs(int i) {

    queue <int> q;
    q.push(i);
    visit[i] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        sort(adj[u].begin(), adj[u].end());
        for (int v : adj[u]) {
            if (!visit[v]) {
                visit[v] = true;
                q.push(v);
            }
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
            bfs(i);
        }
    }

}

