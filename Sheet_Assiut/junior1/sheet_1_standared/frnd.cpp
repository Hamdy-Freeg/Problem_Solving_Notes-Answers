#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp_friend(const pair<int, string> &a, pair<int, string> &b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }

    return a.first > b.first;
}



void solve() {
    int n ;
    cin >> n;

    vector<pair<int,string>> friends(n);

    for (int i =0; i < n; ++i) {
        cin >> friends[i].second >> friends[i].first;
    }

    sort(friends.begin(), friends.end(), cmp_friend);

    for (int i=0; i < n; ++i) {
        cout << friends[i].second << " " << friends[i].first << "\n";
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}