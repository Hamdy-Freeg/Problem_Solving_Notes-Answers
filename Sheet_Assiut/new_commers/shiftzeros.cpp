#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int zero_count =0;
    int arr_idx = 0;
    int check_input;
    for (int i =0; i <n; ++i ) {
        cin >> check_input;
        if (check_input != 0) {
            arr[arr_idx++] = check_input;
        } else {
            zero_count++;
        }
    }
    while(zero_count > 0) {
        arr[arr_idx++] = 0;
        zero_count--;
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