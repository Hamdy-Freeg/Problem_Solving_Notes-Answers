#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> freq(2*m + 1, 0);

    for (int i =0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x + m]++;
    }   

    for (int i =0; i < freq.size(); ++i) {
        if(freq[i] == 0) {
            cout << i - m;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}