#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        prefix_sum[i] = prefix_sum[i - 1] + x;
    }


    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l-1]  << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}