#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,q;
    cin >> n >> q;
    string str;
    cin >> str;
    for (int i=0; i < q; ++i) {
        string key;
        cin >> key;
        if (key == "prev_permutation") {
            int x;
            cin >> x;
            while (x--) {
                prev_permutation(str.begin(), str.end());
            }
        } else {
            int x;
            cin >> x;
            while (x--) {
                next_permutation(str.begin(), str.end());
            }
        } 
        cout << str << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}