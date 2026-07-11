#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    long long sum {};

    vector<long long> arr(n);

    for (int i =0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0) {
        cout << sum << "\n";
    } else {
        long long smallest_odd = LLONG_MAX;
        for (auto x : arr) {
            if (x%2 != 0) {
                smallest_odd = min(smallest_odd, x);
            }
        }
        cout << sum - smallest_odd << "\n";
    }


    return 0;
}