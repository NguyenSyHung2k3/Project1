#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            a++;
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            a--;
        }
    }
    if(a == 0){
        cout << 1;
    } else cout << 0;
}

