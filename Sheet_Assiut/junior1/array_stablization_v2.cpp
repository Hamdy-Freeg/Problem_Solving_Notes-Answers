#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i=0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (arr[n-1] - arr[1] > arr[n-2] - arr[0]) {
        cout << arr[n-2] - arr[0];
    } else {
        cout << arr[n-1] - arr[1] ;
    }

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}