#include<bits/stdc++.h>
using namespace std;

map<string, map<string, string>> ctz;
vector<string> ctz_list;

int max_ancestor(string code){

    int father=0;
    int mother=0;

    if(ctz[code]["father_code"] == "0000000"){
        return 0;
    }

    else if(ctz[code]["father_code"] != "0000000"){
        father = 1+max_ancestor(ctz[code]["father_code"]);
    }

    if(ctz[code]["mother_code"] == "0000000"){
        return 0;
    }

    else if(ctz[code]["mother_code"] != "0000000"){
        mother = 1+max_ancestor(ctz[code]["mother_code"]);
    }
    return max(father, mother);
}

void max_unrelated(){
    int sum=0;
    for(auto code:ctz_list){
        if(ctz[code]["father_code"] == "0000000" || ctz[code]["mother_code"] == "0000000"){
            sum++;
        }
    }
    cout << sum << endl;
}

int year(string s){
    return s[0]*1000+s[1]*100+s[2]*10+s[3];
}

int month(string s){
    return s[5]*10+s[6];
}

int day(string s){
    return s[8]*10+s[9];
}

bool compare(string s1, string s2, string s){
    if(year(s) > year(s1) && year(s) < year(s2)){
        return true;
    } else if(year(s) == year(s1)){
        if(month(s) > month(s1)){
            return true;
        } else if(month(s) == month(s1)){
            if(day(s) >= day(s1)){
                return true;
            }
            else return false;
        } else return false;
    } else if(year(s) == year(s2)){
        if(month(s) < month(s2)){
            return true;
        }
        else if(month(s) == month(s2)){
            if(day(s) <= day(s2)){
                return true;
            }else return false;
        } else return false;
    }

    else return false;

}

int main(){
    while(1){
        string code, d_b, f_c, m_c, is_alive, r_c;
        cin>>code;
        if(code == "*"){
            break;
        } else {
            cin>>d_b>>f_c>>m_c>>is_alive>>r_c;
            map<string, string> info;
            info["dat_of_birth"] = d_b;
            info["father_code"] = f_c;
            info["mother_code"] = m_c;
            info["is_alive"] = is_alive;
            info["region_code"] = r_c;
            ctz[code] = info;
            ctz_list.push_back(code);
        }
    }

    while(1){
        string s;
        cin>>s;
        if(s == "***"){
            break;
        } else {
            if(s == "NUMBER_PEOPLE"){
                cout << ctz_list.size() << endl;
            }
            if(s == "NUMBER_PEOPLE_BORN_AT"){
                string s;
                cin>>s;
                int sum=0;
                for(auto code:ctz_list){
                    if(ctz[code]["dat_of_birth"] == s){
                        sum++;
                    }
                }
                cout << sum << endl;
            }
            if(s == "MOST_ALIVE_ANCESTOR"){
                string s;
                cin>>s;
                cout << max_ancestor(s) << endl;
            }
            if(s == "MAX_UNRELATED_PEOPLE"){
                max_unrelated();
            }
            if(s == "NUMBER_PEOPLE_BORN_BETWEEN"){
                string s1;
                cin>>s1;
                string s2;
                cin>>s2;
                int sum=0;
                for(auto code:ctz_list){
                    if(compare(s1, s2, ctz[code]["dat_of_birth"])){
                        sum++;
                    }
                }
                cout << sum << endl;
            }
        }
    }

    return 0;
}

