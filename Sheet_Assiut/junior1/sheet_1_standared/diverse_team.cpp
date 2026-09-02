#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<bool> seen(105,0);
    vector<int> rates(n);
    vector<int> idx_answer;

    for (int i=0; i < n; ++i) {
        cin >> rates[i];
    }

    for (int i=0; i < n; ++i) {
        if(!seen[rates[i]]) {
            idx_answer.push_back(i);
        }

        seen[rates[i]] = 1;
    }

    if (idx_answer.size() < k) {
        cout << "NO\n";
    } else {   
        cout << "YES\n";
        for (int i =0; i < k; ++i) {
            cout << idx_answer[i] +1 << " ";
        }
        cout << "\n";
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}