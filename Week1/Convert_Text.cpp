#include <bits/stdc++.h>
#include<cstring>
#include<cctype>
using namespace std;
int main() {
    char inputString[20000];
    while( cin.getline(inputString,200000)){

    for(int i = 0;i<strlen(inputString);i++){
        inputString[i]=toupper(inputString[i]);
    }
    cout<<inputString<<endl;
    }
}

