#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    int a[1000005];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] % 2 == 1){
            odd++;
        }
        else even++;
    }
    cout << odd << " " << even;

}

