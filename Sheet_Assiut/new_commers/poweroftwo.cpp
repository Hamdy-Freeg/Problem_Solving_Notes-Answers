#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    while (n > 1) {
        if (n % 2 != 0) {
            cout << "NO";
            return;
        }
        n /= 2LL;
    }
    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}