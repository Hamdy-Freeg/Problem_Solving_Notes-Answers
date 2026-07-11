#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a1,a2,a3;
    int b1,b2,b3;
    int n;
    int sumA = 0;
    int sumB = 0;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    sumA = a1+ a2 + a3;
    sumB = b1 + b2 + b3;

    int nOfA = (sumA + 4) /5;
    int nOfB = (sumB + 9) /10;
    if (n >= (nOfA + nOfB)) {
        cout << "YES \n";
        return;
    }
    cout << "NO \n";




    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}