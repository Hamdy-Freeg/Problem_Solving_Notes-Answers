#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,q;
    cin >> n >> q;
    string str;
    cin >> str;
    vector<string> querys;
    
    for (int i =0; i < q; ++i) {
        string query;
        getline(cin, query);
        stringstream ss(query);
        string word;

        while(ss >> word) {
            querys.push_back(word);
        }
    }

    for (int i =0; i < querys.size(); ++i) {
        if (querys[i] == "substr") {
            int l = stoi(querys[i+1]);
            int r = stoi(querys[i+2]);
            cout << str.substr(l -1,r) << "\n"; 
            i+=2;
        } else if (querys[i] == "pop_back") {
            str.pop_back();

        } else if (querys[i] == "front") {

            cout << str[0] << "\n";

        } else if (querys[i] == "back") {

            cout << str[str.size() -1] << "\n";

        } else if (querys[i] == "reverse") {
            int l = stoi(querys[i+1]);
            int r = stoi(querys[i+2]);
            reverse(str.begin() + l - 1, str.end() + r);
            i+=2;


        } else if (querys[i] == "print") {

            cout << str[stoi(querys[i+1])] << "\n";
            i++;

        } else if (querys[i] == "push_back") {
            char ch = (char)querys[i+1][0];
            str.push_back(ch);
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}