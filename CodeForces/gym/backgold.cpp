#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int inp;
    cin >> inp;

    cout << inp/2 << " \n";

    if (inp % 2 ==0) {
        inp = inp/2;
        while(inp--) {
            cout << 2 << " ";
        }
    }
    else{
        inp -=2;
        inp = inp/2;
        while(inp--) {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}