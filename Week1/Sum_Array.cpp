#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int a[1000005];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout << sum;
}

