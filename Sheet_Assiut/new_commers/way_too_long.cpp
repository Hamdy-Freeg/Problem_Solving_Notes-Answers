#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string word;
    cin >> word;
    int word_len = word.length();

    if (word.length() <= 10 ) {
        cout << word;
        cout << "\n";
    } else if (word.length() > 10) {
        cout << word[0] << word_len -2 << word[word_len - 1] << "\n";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}