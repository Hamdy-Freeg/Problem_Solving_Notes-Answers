#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    double a, b;
    cin >> a >> b;



    cout << "floor " << a << " / " << b << " = " << std::floor(a/b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << std::ceil(a/b) << "\n";
    cout << "round " << a << " / " << b << " = " << std::round(a/b) << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}