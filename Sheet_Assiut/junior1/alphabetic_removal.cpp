#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int str_len, str_rem;
    string str;
    cin >> str_len >> str_rem;
    cin >> str;

    if (str_len == str_rem) {
        cout << "";
        return;
    }

    int farr[123] {0};
    for (int i = 0; i < str_len; ++i) {
        farr[(int)str[i]] += 1;
    }
    
    int last_idx = 123;
    int rem_reminder = 0;
    for (int i =97; i < 123; ++i) {
        if (farr[i] <= str_rem) {
            str_rem -= farr[i];
        } else {
            last_idx = i;
            rem_reminder = str_rem;
            break;
        }
    }


    for (int i =0; i < str_len; ++i) {
        if ((int)str[i] < last_idx) {
            continue;
        } else if ((int)str[i] == last_idx && rem_reminder > 0) {
            rem_reminder -= 1;
            continue;
        }
        
        cout << str[i];
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}