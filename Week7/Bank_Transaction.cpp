#include <bits/stdc++.h>
using namespace std;

map<int, map<string, string>> bank_info;
int d = 1;
int c=1;
map<string, vector<string>> adj;

bool back_tracking(int n, string s, string s1, int k){
    for(int i=n; i<=d-1; i++){

        if(bank_info[i]["from_account"] == s){
            c++;
            s = bank_info[i]["to_account"];
                if(n < d-1){
                    if(s == s1 && c==k){
                        return true;
                    }
                    else back_tracking(i+1, s, s1, k);
                    c--;
                }
                else return false;

        }
    }
    return false;
}

int main() {
    while (1) {
        string f_a, t_a, m, t, a;
        cin >> f_a;

        if (f_a != "#") {
            cin >> t_a >> m >> t >> a;
            map<string, string> info;

            info["from_account"] = f_a;
            info["to_account"] = t_a;
            info["money"] = m;
            info["time"] = t;
            info["atm"] = a;

            bank_info[d] = info;
            d++;
        } else
            break;
    }
    for (int i = 1; i <= d - 1; i++) {
                adj[bank_info[i]["from_account"]].push_back(bank_info[i]["to_account"]);
    }
    vector<string> vt;
            map<string, int> v;
            for (int i = 1; i <= d - 1; i++) {
                if (!v[bank_info[i]["from_account"]]) {
                    vt.push_back(bank_info[i]["from_account"]);
                    v[bank_info[i]["from_account"]] = 1;
                }
                if (!v[bank_info[i]["to_account"]]) {
                    vt.push_back(bank_info[i]["to_account"]);
                    v[bank_info[i]["to_account"]] = 1;
                }
            }

            sort(vt.begin(), vt.end());
    while (1) {
        string s;
        cin >> s;
        if (s == "#") {
            break;
        }
        if (s == "?number_transactions") {
            cout << d - 1 << endl;
        }
        if (s == "?total_money_transaction") {
            int sum = 0;
            for (int i = 1; i <= d - 1; i++) {
                sum += stoi(bank_info[i]["money"]);
            }
            cout << sum << endl;
        }
        if (s == "?total_money_transaction_from") {
            string s;
            cin >> s;
            int sum = 0;
            for (int i = 1; i <= d - 1; i++) {
                if (bank_info[i]["from_account"] == s) {
                    sum += stoi(bank_info[i]["money"]);
                }
            }
            cout << sum << endl;
        }
        if (s == "?list_sorted_accounts") {

            for (auto a : vt) {
                cout << a << " ";
            }
            cout << endl;
        }
        if (s == "?inspect_cycle") {
            string s1;
            cin >> s1;
            int k;
            cin >> k;
            int t=0;

            for(int i=1; i<=d-1; i++){
                if(bank_info[i]["from_account"] == s1){
                    if(back_tracking(i, bank_info[i]["to_account"], s1, k)){
                        t=1;
                        break;
                    }
                }
            }
            cout << t << endl;

        }
    }
}

