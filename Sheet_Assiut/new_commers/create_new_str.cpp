#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int s_len = 0;
    int t_len = 0;
    string s;
    string t;
    cin >> s;
    cin >> t;

    s_len = s.length();
    t_len = t.length();
    cout << s_len << " " << t_len << "\n";
    cout << s << " " << t;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}