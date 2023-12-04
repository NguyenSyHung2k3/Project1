#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[100000];

bool check(int i){
    if(adj[i].size() > n/2){
        return true;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        bool c = false;
        for(int i=0; i<m; i++){
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i=1; i<=n; i++){
            c = check(i);
        }

        cout << c << endl;

    }

}

