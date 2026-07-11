#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int arr[55];
    int n,k;
    cin >> n>>k;
    int par_cnt =0;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int k_score = arr[k];
    for (int i =1; i <=n; i++) {
        if (arr[i] >= k_score && arr[i] > 0) {
            par_cnt++;
        }
    }
    cout << par_cnt;


    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}