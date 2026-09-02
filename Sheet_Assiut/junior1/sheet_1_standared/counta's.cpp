#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string str;
    cin >> str;

    int q;
    cin >> q;
    
    int n = str.size();

    vector<int> freq(n + 2, 0);
    vector<int> prf(n + 1, 0);

    for (int i=0; i <= n; ++i) {
        if (str[i] == 'a') {
            freq[i+1]++;
        }
    }

    for (int i=1; i <= n; ++i) {
        prf[i] = prf[i-1] + freq[i]; 
    }

    while(q--) {
        int l,r;
        cin >> l >> r;

        cout << prf[r] - prf[l-1] << "\n";
    }
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}