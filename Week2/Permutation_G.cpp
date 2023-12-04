#include<bits/stdc++.h>
using namespace std;

int n, x[10000];
bool B[10000];

void print(){
    for(int i=1; i<=n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try(int k){
    for(int i=1; i<=n; i++){
        if(!B[i]){
            x[k]=i;
            B[i]=1;
            if(k==n){
                print();
            } else
            Try(k+1);
            B[i]=0;
        }
    }
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        B[i] = false;
    }
    Try(1);
    return 0;
}

