#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> vec(n);
    for (int i=0; i<n; ++i) {
        cin >> vec[i];
    }

    while(q--) {
        string str;
        cin >> str;

        if(str == "sort" || str == "reverse") {
            int l,r;
            cin >> l >> r;
            if (str == "sort") {

                sort(vec.begin() + l -1 , vec.begin() + r);

            } else {
                reverse(vec.begin() + l -1 , vec.begin() + r);
            }
        } else if (str == "print" || str == "push_back") {
            int x;
            cin >> x;
            if (str == "print") {
                cout << vec[x -1] << "\n";
            } else {
                vec.push_back(x);
            }
        } else {
            if (str == "pop_back") {
                vec.pop_back();
            } else if (str == "front") {
                cout << vec.front() << "\n";
            } else {
                cout << vec.back() << "\n";
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