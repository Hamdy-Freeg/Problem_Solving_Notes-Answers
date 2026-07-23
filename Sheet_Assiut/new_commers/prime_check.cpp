#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    for (int i =2; i*i <= n; ++i) {
        if (n %i == 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}