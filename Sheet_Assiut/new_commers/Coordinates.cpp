#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    double x , y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Origem";
    } else if (x == 0 && y != 0) {
        cout << "Eixo Y";
    } else if (x != 0 && y == 0) {
        cout << "Eixo X";
    } else {
        if (x > 0) {
            if (y > 0) {
                cout << "Q1";
            } else {
                cout << "Q4";
            }
        } else if (x < 0) {
            if (y > 0) {
                cout << "Q2";
            } else {
                cout << "Q4";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}