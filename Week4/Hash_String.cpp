#include <bits/stdc++.h>
#define ll long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

void Init(){

}

ll MOD;

int HashValue(){
    ll ans = 0;

    char c = getchar();
    while(c!='\n'){
        ans = (ans*256 + c)%MOD;
        c=getchar();
    }
    return ans;
}

void Solve(){
    int n,m;
    cin>> n >> m;
    // loai bo ki tu xuong dong dau tien
    char c = getchar();

    MOD = m;

    //tinh toan
    for(int i=1; i<=n; ++i)
        cout<<HashValue()<<'\n';

}

int main()
{
    //MakeTest();
    Init();
    Solve();
}
