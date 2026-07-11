#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, a;
    cin >> n >> a;
    int caught =0;
    vector<int> arr(n+1);
    for (int i =1; i <= n; i++) {
        cin >> arr[i];
    }

    if (arr[a] == 1) {
        caught++;
    }

    for (int j =1; j < n; j++) {
        int left = a- j;
        int right = a+j;
        
        if (left < 1 && right > n) break;
        
        if (left >= 1 && right <=n) {
            if(arr[left] == 1 && arr[right] == 1) {
                caught +=2;
            }
        }
        else if (left >=1 ) {
            if (arr[left] == 1) {
                caught++;
            }
        } else if (right <= n) {
            if (arr[right] == 1) {
                caught++;
            }
        }
        
    }
    cout << caught << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    

    return 0;
}