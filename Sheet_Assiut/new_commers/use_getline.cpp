#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    getline(cin,s);
    int idx_of_slash = s.find("\\");

    string res = s.substr(0, idx_of_slash);

    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}