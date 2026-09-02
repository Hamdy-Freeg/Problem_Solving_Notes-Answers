#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> p_sum(100002,0);
    int max_value = INT_MIN;

    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        max_value = max(x, max_value);
        p_sum[x] = 1;
    }

    for (int i=1; i <= 100001; ++i) {
        p_sum[i] += p_sum[i-1];
    }

    while(q--) {
        int x,l,r;
        cin >> x;

        l = p_sum[x-1];
        r = p_sum[100001] - p_sum[x];

        cout << l << " " << r << "\n";

    }
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}