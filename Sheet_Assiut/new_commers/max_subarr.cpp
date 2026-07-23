#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int max_ele = INT_MIN;
        for (int j = i; j < n; ++j) {
            max_ele = max(max_ele, arr[j]);
            cout << max_ele << " ";
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