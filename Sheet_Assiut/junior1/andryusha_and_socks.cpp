#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> farr(n+1, 0);
    int current_on_table =0;
    int max_on_table = 0;
    for (int i =0; i < 2*n; ++i) {
        int x;
        cin >> x;
        if(farr[x] == 0) {
            farr[x] = 1;
            current_on_table++;
            max_on_table = max(current_on_table, max_on_table);
        } else if (farr[x] == 1 ) {
            farr[x] = 0;
            current_on_table--;
            max_on_table = max(max_on_table, current_on_table);

        }
    }

    cout << max_on_table;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}