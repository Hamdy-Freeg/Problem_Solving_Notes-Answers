#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x, y, q;
    cin >> x >> y >> q;
    vector<vector<ll>> r_sum(x+1, vector<ll>(y+1, 0));

    for (int i=1; i <= x; ++i) {
        for (int j=1; j <= y; ++j) {
            ll val;
            cin >> val;
            r_sum[i][j] = r_sum[i][j-1] + val;
        }
    }

    for (int j=1; j <= y; ++j) {
        for (int i=1; i <= x; ++i) {
            r_sum[i][j] += r_sum[i-1][j];
        }
    }

    while(q--) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << (r_sum[x2][y2] - r_sum[x2][y1-1] - r_sum[x1-1][y2] + r_sum[x1-1][y1-1]) << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}