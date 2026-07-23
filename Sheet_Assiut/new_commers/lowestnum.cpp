#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int idx = 0;
    vector<int> arr(n) ;
    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int lowest_num = arr[0];

    for (int i =0; i < n; ++i) {
        if (lowest_num > arr[i]) {
            lowest_num = arr[i];
            idx = i;
        }
    }
    cout << lowest_num << " " << idx+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}
