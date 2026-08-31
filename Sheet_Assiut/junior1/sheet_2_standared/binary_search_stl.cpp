#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);

    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i =0; i < q; ++i) {
        string query;
        cin >> query;
        int x;
        if (query == "binary_search") {
            cin >> x;
            if (binary_search(arr.begin(), arr.end(), x)) {
                cout << "found\n";
            } else {
                cout << "not found\n";
            }

        } else if (query == "upper_bound") {
            cin >> x;
            int idx = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
            if (idx >= arr.size()) {
                cout << -1 << "\n";
            } else {
                cout << arr[idx] << "\n";
            }

        } else {
            cin >> x;
            int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            if (idx >= arr.size()) {
                cout << -1 << "\n";
            } else {
                cout << arr[idx] << "\n";
            }

        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}