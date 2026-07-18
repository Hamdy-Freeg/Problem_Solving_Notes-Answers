#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n; ll s;
    cin >> n >> s;
    ll cond = (n * (n+1)/2 ); 
    if (cond< s) {
        cout << -1 << "\n";
        return;
    }

    for (int i = n; i > 0; --i) {
        if (s >= i) {
            cout << i << " ";
            s -= i;
        }
    }
    cout << "\n";
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}