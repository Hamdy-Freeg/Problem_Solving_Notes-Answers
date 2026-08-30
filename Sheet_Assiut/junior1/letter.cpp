#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string headding;
    string text;
    getline(cin, headding);
    getline(cin, text);
    int farr[256] {0};

    for (int i =0; i < headding.size(); ++i) {
        farr[(int)headding[i]]++;
    }

    for (int i =0; i < text.size(); ++i) {
        if(text[i] == ' ') {
            continue;
        }
        if (farr[(int)text[i]] > 0) {
            farr[(int)text[i]]--;
        } else {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}