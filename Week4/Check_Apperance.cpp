#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000];
    map<int, int> b;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i]] = 0;
    }
    for(int i=0; i<n; i++){
        if(i == 0){
            b[a[i]]++;
            cout << 0 << endl;
        } else {
            if(b[a[i]] > 0){
                cout << 1 << endl;
            }
            else if(b[a[i]] == 0){
                cout << 0 << endl;
                b[a[i]]++;
            }
        }
    }

}

