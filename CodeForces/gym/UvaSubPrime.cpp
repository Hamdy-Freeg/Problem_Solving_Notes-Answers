#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int banks, n;
    while (cin >> banks >> n && (banks&&n)) 
    {
        int arr[25];
        for (int i=1; i <= banks; i++) {
            cin >> arr[i];
        }
        for(int i=0; i < n; i++) {
            int d,c,v;
            cin >> d >> c >>v;
            arr[d] -= v;
            arr[c] += v;
        }
    
        char ans = 'S';
        for (int i=1; i <= banks; i++) {
            if (arr[i]<0) {
                ans = 'N';
                break;
            }
        }
        cout << ans << "\n";
    }
    


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}