#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    char x;
    cin >> x;

    if ((int)x > 47 && (int)x < 58) {
        cout << "IS DIGIT";
    } else if ((int)x > 64 && (int)x < 124) {
        cout << "ALPHA\n";
        if ((int)x > 64 && (int)x < 97) {
            cout << "IS CAPITAL";
        } else if ((int)x > 96 && (int)x < 124) {
            cout << "IS SMALL";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}