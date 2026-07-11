#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    ll sum = 0;
    int min_odd = 1e9+7;
    while(n--) {
        int num; 
        cin >> num;
        sum += num;
        if(num%2 !=0) {
            min_odd = min(num,min_odd);
        }
    }
    if (sum%2 == 0) {
            cout << sum << "\n";
        } else {
            cout << sum - min_odd << "\n"; 
        }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}