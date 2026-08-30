#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i < n; ++i) {
        cin >> arr[i];
    } 

    int max_val = arr[0], min_val = arr[0], after_min =0, before_max=0;

    for(int i =0; i < n; ++i) {
        if (max_val < arr[i]) {
            before_max = max_val;
            max_val = arr[i];
        }
        if (min_val > arr[i]) {
            after_min = min_val;
            min_val = arr[i];
        }
    }


    if (max_val - after_min > before_max - min_val) {
        cout <<  before_max - min_val;
    } else {
        cout << max_val - after_min;
    }
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}