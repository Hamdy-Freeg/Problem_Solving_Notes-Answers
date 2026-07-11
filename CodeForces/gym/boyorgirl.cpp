#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string str;
    cin >> str;

    bool hashChar[26] = {0};

    int cnt =0;

    for(int i=0; i < str.length(); i++) {
        int index = str[i] - 'a';
        if (hashChar[index] == false) {
            cnt++;
            hashChar[index] =true;
        }
    }
    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}