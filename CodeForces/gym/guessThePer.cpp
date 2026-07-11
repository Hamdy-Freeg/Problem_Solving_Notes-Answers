#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n); 

    for (int i = 0; i < n; i++) {
        int row_max = 0;
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            row_max = max(row_max, val);
        }
        p[i] = row_max;
    }


    for (int i = 0; i < n; i++) {
        if (p[i] == n - 1) {
            p[i] = n; 
            break;    
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}