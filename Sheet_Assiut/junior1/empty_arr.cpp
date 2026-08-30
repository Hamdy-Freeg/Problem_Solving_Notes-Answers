#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> freq(100001,0);
    int max_ele = INT_MIN;
    
    for (int i =0; i < n; ++i) {
        int idx_ele;
        cin >> idx_ele;
        if (max_ele < idx_ele) {
            max_ele = idx_ele;
        }
        freq[idx_ele]++;
    }

    int most_freq = *max_element(freq.begin(), freq.end());

    for (int i =0; i < most_freq; ++i) {
        for (int j =0; j < max_ele; ++j) {
            if (freq[j] > 0 ) {
                cout << j << " ";
                freq[j]--;
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