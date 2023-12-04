#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n; i<=999; i+=n){
        if(i>=100){
            cout << i << " ";
        }
    }
}

