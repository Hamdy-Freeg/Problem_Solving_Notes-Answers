#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string p;
    cin >> p;
    int len = p.length();
    for (int i =0; i < len/2; ++i) {
        if(p[i] == '?' && p[len-1-i] == '?') {
            cout << -1 << "\n";
            return;
        }

        if(p[i] == '?' && p[len-i-1] != '?') {
            p[i] = p[len-i-1];
        } else if (p[len -1 -i] == '?' && p[i] != '?') {
            p[len -1 -i] = p[i];
        }
    }
    cout << p;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}