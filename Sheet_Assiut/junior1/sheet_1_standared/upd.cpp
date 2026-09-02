#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n+1);
    vector<ll> diff_arr(n+2, 0);
    for (int i=1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i =0; i < q; ++i) {
        int l, r, val;
        cin >> l >> r >> val;

        diff_arr[l] += val;
        diff_arr[r+1] -= val;
    }

    for (int i=1; i <= n; ++i) {
        diff_arr[i] += diff_arr[i-1];
    }
    for (int i=1 ; i <= n; ++i) {
        arr[i] += diff_arr[i];
        cout << arr[i] << " ";
    }






}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}