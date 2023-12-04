#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;

bool bfs(vector<vector<int>> &rG, int s, int t, vector<int> &p)
{
    vector<bool> vs(n, false);
    queue<int> q;
    q.push(s);
    vs[s-1] = true;
    p[s-1] = -1;

    while (!q.empty()){
        int u = q.front();
        q.pop();

        for (int v=1; v<=n; v++){
            if (!vs[v-1] && rG[u-1][v-1] > 0){
                if (v == t){
                    p[v-1] = u;
                    return true;
                }
                q.push(v);
                p[v-1] = u;
                vs[v-1] = true;
            }
        }
    }

    return false;
}

int F_F(vector<vector<int>> &G, int s, int t)
{
    vector<vector<int>> rG(G);

    vector<int> p(n, 0);

    int max_f = 0;

    while (bfs(rG, s, t, p)){
        int path_f = INT_MAX;
        for (int v=t; v!=s; v=p[v-1]){
            int u = p[v-1];
            path_f = min(path_f, rG[u-1][v-1]);
        }

        for (int v=t; v!=s; v=p[v-1]){
            int u = p[v-1];
            rG[u-1][v-1] -= path_f;
            rG[v-1][u-1] += path_f;
        }

        max_f += path_f;
    }

    return max_f;
}

int main(){
    cin>>n>>m;
    cin>>s>>t;
    vector<vector<int>> G(n, vector<int>(n, 0));

    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        cin >> G[u-1][v-1];
    }

    cout << F_F(G, s, t);

    return 0;
}

