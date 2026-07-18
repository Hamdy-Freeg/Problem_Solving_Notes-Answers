#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a, b;
    cin >> a >> b;

    if ((a-b) >= 0) {
        cout << (a-b);
    } else {
        cout << 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}