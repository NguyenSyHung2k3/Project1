#include<bits/stdc++.h>
using namespace std;

int c[10000][10000];
int C(int n, int k){
    for(int i=0; i<=n; i++){
        c[i][0]=1;
        for(int j=1; j<=i; j++){
            c[i][j]=c[i-1][j]+c[i-1][j-1];
        }
    }
    return c[n][k];
}

int main(){
    int n, k;
    cin>>k>>n;
    cout << C(n, k);
    return 0;
}

