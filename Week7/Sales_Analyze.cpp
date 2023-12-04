#include<bits/stdc++.h>
using namespace std;

map<int, map<string, string>> data;
int d=1;

int countTime(string time){
    int sum=0;
    return sum = time[0]*36000+time[1]*3600+time[3]*600+time[4]*60+time[6]*10+time[7];
}

struct SU{
    string cs;
    string shop;
    bool operator<(const SU& other) const {
        if (cs != other.cs) {
            return cs < other.cs;
        }
        return shop < other.shop;
    }
};

long long sumP = 0;
map<string, long long> sumUser;
map<string, long long> sumS;
map<SU, long long> sumSU;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    while(1){
        string cId, pId, p, sId, ti;

        cin>>cId;
        if(cId == "#"){
            break;
        }
        else {
            cin>>pId>>p>>sId>>ti;
            map<string, string> info;
            info["customerId"] = cId;
            info["productId"] = pId;
            info["price"] = p;
            info["shopId"] = sId;
            info["time"] = ti;
            data[d] = info;
            int price = stoi(p);
            d++;
            sumUser[cId] += price;
            sumP += price;
            SU su;
            su.cs = cId;
            su.shop = sId;
            sumSU[su] += price;
            sumS[sId] += price;
        }
    }

    while(1){
        string s;
        cin>>s;
        if(s == "#"){
            break;
        }
        else{
            if(s == "?total_number_orders"){
                cout << d-1 << endl;
            }
            if(s == "?total_revenue"){
                cout << sumP << endl;
            }
            if(s == "?revenue_of_shop"){
                string s;
                cin>>s;

                cout << sumS[s] << endl;
            }
            if(s == "?total_consume_of_customer_shop"){
                string id;
                cin>>id;
                string s;
                cin>>s;
                SU su;
                su.cs = id;
                su.shop = s;
                cout << sumSU[su] << endl;
            }
            if(s == "?total_revenue_in_period"){
                string ti1;
                string ti2;
                cin>>ti1>>ti2;
                int t1 = countTime(ti1);
                int t2 = countTime(ti2);
                long long sum=0;
                for(int i=1; i<=d-1; i++){
                    int t = countTime(data[i]["time"]);
                    if(t>=t1 && t<=t2){
                        sum+=stoi(data[i]["price"]);
                    }
                }
                cout << sum << endl;
            }
        }
    }
}

