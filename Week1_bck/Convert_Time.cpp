#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int hh = (s[0]-'0')*10+(s[1]-'0');
    int mm = (s[3]-'0')*10 + (s[4]-'0');
    int ss = (s[6]-'0')*10 + (s[7]-'0');

    if(hh<0 || hh>23){
        cout << "INCORRECT";
        exit(0);
    }else if(s[2] != ':'){
        cout << "INCORRECT";
        exit(0);
    }else if(mm<0 || mm >59){
        cout << "INCORRECT";
        exit(0);
    }else if(s[5] != ':'){
        cout << "INCORRECT";
        exit(0);
    }else if(ss<0 || ss >59){
        cout << "INCORRECT";
        exit(0);
    }
}

 int main(){
    string s;
    cin>>s;

    check(s);

    int hh = (s[0]-'0')*36000 + (s[1]-'0')*3600;
    int mm = (s[3]-'0')*600 + (s[4]-'0')*60;
    int ss = (s[6]-'0')*10 + (s[7]-'0');

    cout << hh+mm+ss;

 }

