#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(1000001, 0); 
    long long arr_sum = 0;


    for (int i =0; i < n; ++i) {
        int x;
        cin >> x;
        arr_sum += x;
        arr[i] = x;
        freq[x]++;
    }
    vector<int> idx_arr;
    int idx_count = 0;

    for (int i =0; i < n; ++i) {
        freq[arr[i]]--;

        long long current_sum = arr_sum - arr[i];

        if ((arr_sum - arr[i])%2 == 0) {
            long long target = current_sum / 2;

            if ((target <= 1000000) && freq[target]) {
                idx_count++;
                idx_arr.push_back(i+1);
            }
        }
        freq[arr[i]]++;
    }

    if (idx_arr.empty() || idx_count == 0) {
        cout << 0;
        return;
    }


    cout << idx_count << "\n";
    for (int i =0; i < idx_count; ++i) {
        cout << idx_arr[i] << " ";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}