#include<bits/stdc++.h>
using namespace std;

int n;
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    else return fibo(n-1)+fibo(n-2);
}

int main(){
    cin>>n;
    cout << fibo(n-1);
    return 0;
}

