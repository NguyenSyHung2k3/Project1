#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000006];
    long long res=0;
    int n, s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        res+=a[s-x];
        a[x]++;
    }
    cout << res;
    return 0;
}

