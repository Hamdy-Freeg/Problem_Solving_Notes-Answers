#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x;
    cin >> x;

    x /= 1000;

    if (x % 2 == 0) {
        cout << "EVEN";
    } else {
        cout << "ODD";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}