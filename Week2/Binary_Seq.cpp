#include<bits/stdc++.h>
using namespace std;

int x[10000], n;
void print(){
    for(int i=0; i<n; i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int k){
    for(int i=0; i<=1; i++){
        x[k]=i;
        if(k==n-1){
            print();
        }
        else Try(k+1);
    }
}

int main(){
    cin>>n;
    Try(0);

    return 0;
}

