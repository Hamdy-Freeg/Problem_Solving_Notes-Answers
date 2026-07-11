#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int best_i = 2;
    int best_j = 2;
    int target_i;
    int target_j;
    int val;

    for (int i =0; i < 5; i++) {
        for (int j=0; j < 5; j++) {
            cin >> val;
            if (val > 0) {
                target_i = i;
                target_j = j;
                int steps_i = abs(target_i - best_i);
                int steps_j = abs(target_j - best_j);
            
                cout << steps_i + steps_j << '\n';
                return;
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