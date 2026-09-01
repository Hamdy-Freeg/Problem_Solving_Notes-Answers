#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string str;
    cin >> str;

    vector<int> freq(150,0);

    for (int i =0; i < str.length(); ++i) {
        freq[(int)str[i]]++;
    }
    for (int i =0; i < freq.size(); ++i) {
        if (freq[i] > 0) {
            cout << (char)i << " " << freq[i] << "\n";
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}