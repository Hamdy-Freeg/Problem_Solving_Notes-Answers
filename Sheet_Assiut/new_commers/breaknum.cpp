#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    int max_function = 0;
    for (int i = 0; i < n; ++i) {
        ll inp;
        cin >> inp;
        int m = 0;

        while (inp %2 == 0) {
            m++;
            inp /= 2;
        }
        max_function = max(max_function, m);
    }
    cout << max_function;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}