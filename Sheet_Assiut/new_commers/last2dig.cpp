#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long  res = (long long) a*b*c*d;
    cout << res%100;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}