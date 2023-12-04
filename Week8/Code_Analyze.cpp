#include<bits/stdc++.h>
using namespace std;

map<int, map<string, string>> user;
int d=1;

int find_max(string s, string p){

}

int hour(string s){
    return s[0]*10+s[1];
}

int minute(string s){
    return s[3]*10+s[4];
}

int second(string s){
    return s[6]*10+s[7];
}

int time(string s){
    return hour(s)*3600+minute(s)*60+second(s);
}

bool compare(string s1, string s2, string s){
    if(time(s) > time(s1) && time(s) < time(s2)){
        return true;
    }
    else return false;
}

int err = 0;

int main(){
    while(1){
        string user_id, pr_id, time, status, point;
        cin>>user_id;
        if(user_id == "#"){
            break;
        } else {
            cin>>pr_id>>time>>status>>point;
            if(status == "ERR"){
                err++;
            }
            map<string, string> info;
            info["user"] = user_id;
            info["pr_id"] = pr_id;
            info["time"] = time;
            info["status"] = status;
            info["point"] = point;
            user[d] = info;
            d++;
        }
    }
    while(1){
        string s;
        cin>>s;
        if(s == "#"){
            break;
        } else {
            if(s == "?total_number_submissions"){
                cout << d-1 << endl;
            }
            if(s == "?number_error_submision"){
                cout << err;
            }
            if(s == "?number_error_submision_of_user"){
                string s;
                cin>>s;
                int sum=0;
                for(int i=1; i<d; i++){
                    if(user[i]["user"] == s && user[i]["status"] == "ERR"){
                        sum++;
                    }
                }
                cout << sum << endl;
            }
            if(s == "?total_point_of_user"){
                string s;
                cin>>s;
                map<string, int> m;
                map<string, int> tmp;
                int sum=0;
                for(int i=1; i<d; i++){
                    if(user[i]["user"] == s){
                        if(user[i]["status"] == "OK"){
                            m[user[i]["pr_id"]] = stoi(user[i]["point"]);

                            if(m[user[i]["pr_id"]] > tmp[user[i]["pr_id"]]){
                                sum -= tmp[user[i]["pr_id"]];
                                tmp[user[i]["pr_id"]] = m[user[i]["pr_id"]];
                                sum += tmp[user[i]["pr_id"]];
                            }
                            else continue;
                        }
                    }
                }


                cout << sum << endl;
            }
            if(s == "?number_submission_period"){
                string s1;
                cin>>s1;
                string s2;
                cin>>s2;
                int sum=0;
                for(int i=1; i<d; i++){
                    if(compare(s1, s2, user[i]["time"])){
                        sum++;
                    }
                }
                cout << sum << endl;
            }
        }
    }

}

