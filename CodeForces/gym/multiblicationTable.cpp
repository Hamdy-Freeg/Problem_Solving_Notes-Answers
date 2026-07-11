#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int cnt =0;
    if (n >= x ) {
        cnt++;
    }

    for (int i =2 ; i <= n; i++) {
        if ((x % i == 0) && (x/i <=n)) {
            cnt++;
        }
    }

    cout << cnt;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();


    return 0;
}