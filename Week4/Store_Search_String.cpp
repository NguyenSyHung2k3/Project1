#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<string, int> mp;
    while(s != "*"){
        cin>>s;
        if(mp[s] == 0){
            mp[s]++;
        } else if(mp[s] > 0){
            continue;
        }
    }
    string query;
    while(query != "***"){
        cin>>query;
        if(query == "find"){
            string s;
            cin>>s;
            if(mp[s] > 0){
                cout << 1 << endl;
            } else if(mp[s] == 0){
                cout << 0 << endl;
            }
        }
        if(query == "insert"){
            string s;
            cin>>s;
            if(mp[s] == 0){
                cout << 1 << endl;
                mp[s]++;
            } else if(mp[s] > 0){
                cout << 0 << endl;
            }

        }
    }

}

