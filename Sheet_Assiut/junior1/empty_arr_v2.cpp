#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }

    while (!mp.empty()) {
        vector<int> to_remove; 
        
        for (auto& p : mp) {
            cout << p.first << " ";
            p.second--;
            
            if (p.second == 0) {
                to_remove.push_back(p.first);
            }
        }
        cout << "\n";
        
        for (int x : to_remove) {
            mp.erase(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}