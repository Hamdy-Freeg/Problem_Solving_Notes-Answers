#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,q;
    cin >> n >> q;
    string str;
    cin >> str;

    for(int i =0; i < q; ++i) {
        string query;
        cin >> query;
        if (query == "sort" || query == "reverse" || query == "substr") {
            int l,r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (query == "substr") {
                cout << str.substr(l -1, r-l+1) << "\n"; 
            } else if (query == "reverse") {
                reverse(str.begin() + l -1, str.begin() + r);
            } else {
                sort(str.begin() + l -1, str.begin() + r);
            }
        } else if (query == "print" || query == "push_back") {
            if (query == "print") {
                int pos;
                cin >> pos;
                cout << str[pos-1] << "\n";
            } else {
                char ch;
                cin >> ch;
                str.push_back(ch);
            }
        } else {
            if (query == "front") {
                cout << str[0] << "\n";
            } else if (query == "back") {
                cout << str[str.size() -1] << "\n";
            } else {
                str.pop_back();
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