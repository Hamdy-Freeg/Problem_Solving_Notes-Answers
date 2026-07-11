#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int climbStairs(int n) {
    int n1= 0;
    int n2 = 1;
    int n3 = 0;

    for (int i=0; i < n; ++i) {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    
    return n3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << climbStairs(5);

    return 0;
}