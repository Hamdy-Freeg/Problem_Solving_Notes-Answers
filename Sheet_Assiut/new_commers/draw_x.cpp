#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    int f_slash = 0;
    int b_slash = n-1;
    int x = n/2;

for (int j = 0; j < n; ++j) {
    for (int i =0; i < n; ++i) {
        if(i == f_slash && f_slash != x) {
            cout << "\\";
        } else if(i == b_slash && b_slash != x) {
            cout << "/";
        } else if (j == x && i == x) {
            cout << "X";
        } else {
            cout << "*";
        }
    }
    f_slash +=1;
    b_slash -=1;
    cout << "\n";
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}