#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack<string> k;
    queue<string> q;
    while(s!="#"){
        cin>>s;
        if(s == "PUSH"){
            string a;
            cin>>a;
            k.push(a);
        }
        if(s == "POP"){
            if(!k.empty()){
                q.push(k.top());
                k.pop();
            } else {
                q.push("NULL");
            }

        }
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

