#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n) ;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i =0; i < (int)n/2; ++i) {
        if (arr[i] != arr[n-1-i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";

    
 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
