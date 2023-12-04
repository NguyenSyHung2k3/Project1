#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int mm = (s[5]-'0')*10+(s[6]-'0');
    int dd = (s[8]-'0')*10+(s[9]-'0');
    if(mm < 0 || mm > 12){
        cout << "INCORRECT";
        exit(0);
    }
    if(dd < 0 || dd > 31){
        cout << "INCORRECT";
        exit(0);
    }
    if(s[4] != '-' || s[7] != '-'){
        cout << "INCORRECT";
        exit(0);
    }
}

 int main(){
    string s;
    cin>>s;

    check(s);

    int yy = (s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
    int mm = (s[5]-'0')*10+(s[6]-'0');
    int dd = (s[8]-'0')*10+(s[9]-'0');

    cout << yy << " " << mm << " " << dd;

 }

