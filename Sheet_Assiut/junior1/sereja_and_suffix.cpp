#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n , m;
    cin >> n >> m;
    
    vector<int> arr(n);
    vector<bool> seen(100002, false);
    vector<int> answer(n+1);
    
    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int count =0;

    for (int i = n -1; i >= 0; --i) {
        if (!seen[arr[i]]) {
            count++;
            seen[arr[i]] = 1;
        }

        answer[i] = count;
    }


    for (int i =0; i < m; ++i) {
        int position;
        cin >> position;
        cout << answer[position -1] << "\n";
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}