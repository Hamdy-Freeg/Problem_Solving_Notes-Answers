#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i =0; i < n; ++i) {
        if (arr[i] > 0) {
            arr[i] = 1;
        } else if (arr[i] < 0) {
            arr[i] = 2;
        }
    }
    for (int i =0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}