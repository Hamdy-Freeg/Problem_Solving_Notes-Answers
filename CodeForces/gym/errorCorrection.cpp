#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; 
    while(cin >> n && n!=0){

        int arr[n][n];
        int odd_rows =0;
        int odd_cols = 0;
        int idx_r, idx_c;
        for(int i=0; i < n ; i++)  {
        for (int j=0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    
    for(int i=0; i < n ; i++)  {
        int row_sum =0;
        int col_sum =0;
        for (int j=0; j < n; j++) {
            row_sum += arr[i][j];
            col_sum += arr[j][i];
        }
        if(row_sum%2!=0) {
            odd_rows += 1;
            idx_r = i;
        }
        if(col_sum%2!=0) {
            odd_cols += 1;
            idx_c = i;
        }
    }
    if (odd_rows == 0 && odd_cols == 0) {
        cout << "OK\n";
    }
    else if (odd_rows == 1 && odd_cols == 1) {
        cout <<"Change bit ("<< idx_r+1 << "," << idx_c+1 <<")\n";

    } else {
        cout << "Corrupt\n" ;
    };
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}