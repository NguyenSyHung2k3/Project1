#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10005];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    string s;
    cin>>s;
    if(s=="*"){
        string s1;
        while(s1!="***"){
            cin>>s1;
            if(s1 == "find-min"){
                int MIN = a[1];
                for(int i=2; i<=n; i++){
                    if(a[i] < MIN){
                        MIN = a[i];
                    }
                }
                cout << MIN << endl;
            }
            if(s1 == "find-max"){
                int MAX = a[1];
                for(int i=2; i<=n; i++){
                    if(a[i] > MAX){
                        MAX = a[i];
                    }
                }
                cout << MAX << endl;
            }
            if(s1 == "sum"){
                int sum = 0;
                for(int i=1; i<=n; i++){
                    sum+=a[i];
                }
                cout << sum << endl;
            }
            if(s1 == "find-max-segment"){
                int i, j;
                cin>>i>>j;
                int MAX=a[i];
                for(int k=i+1; k<=j; k++){
                    if(MAX < a[k]){
                        MAX = a[k];
                    }
                }
                cout << MAX << endl;
            }
        }
    } else if (s=="***"){
        exit(0);
    }
    return 0;
}

