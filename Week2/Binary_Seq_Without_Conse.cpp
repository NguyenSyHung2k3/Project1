#include<bits/stdc++.h>
using namespace std;

int n;
int x[10000];

void print(){
    for(int i=0; i<n; i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int k){
    for(int i=0; i<2; i++){
        if(x[k-1] == 1){
            x[k]=0;
            i++;
        }
        else x[k]=i;
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

