#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    int sum=0;
    int c=0;
    int a[100005];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=k; i++){
        sum+=a[i];
    }
    if(sum%2==0){
        c++;
    }
    for(int i=k; i<n; i++){
        sum-=a[i-k+1];
        sum+=a[i+1];
        if(sum%2==0){
            c++;
        }
    }
    cout << c;
}

