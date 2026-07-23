#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x;
    string n;
    cin >> x;
    cin >> n;
    int summation = 0;

    for (char c : n) {
        summation += c - '0';
    }

    cout << summation;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}