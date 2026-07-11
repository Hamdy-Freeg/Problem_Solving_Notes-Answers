#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int k, r;
    cin >> k >> r;
    int cnt = 1;
    int price_sum = k;
    while ((price_sum%10 != r) && (price_sum%10 != 0)) {
        price_sum += k;
        cnt++;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}