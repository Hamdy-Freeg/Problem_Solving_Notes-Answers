#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string tx;
    getline(cin, tx);
    bool isPending = false;

    for (int i=0 ; i < tx.length(); i++) {
        if (tx[i] == ' ') {
            isPending = true;
        }
        else if (tx[i] == ',' ||tx[i] == '?' ||tx[i] =='!' ||tx[i] =='.') {
            cout << tx[i] ;
            isPending = true;
        } 
        else {
            if(isPending) {
                cout << ' ';
                isPending = false;
            }
            cout << tx[i];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();


    return 0;
}