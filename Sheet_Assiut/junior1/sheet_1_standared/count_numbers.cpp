#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, q;
    cin >> n>> q;
    vector<int> freq(n+1, 0);
    for (int i =0; i < q; ++i) {
        int x;
        cin >> x;
        if (x == 1) {

            int idx;
            cin >> idx;
            freq[idx]++;

        } else {

            int idx;
            cin >> idx;

            cout << freq[idx] << "\n";

        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}