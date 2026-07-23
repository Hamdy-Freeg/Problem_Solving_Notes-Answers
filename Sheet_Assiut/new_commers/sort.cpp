#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; 
    cin >> n;

    vector<int> arr(n);

    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i =0; i < n-1; ++i) {
        bool is_changed = false;

        for (int j =0; j < n - i -1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                is_changed = true;
            }
        }

        if(!is_changed) {
            break;
        }
    }
    for (int i =0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
    return 0;
}