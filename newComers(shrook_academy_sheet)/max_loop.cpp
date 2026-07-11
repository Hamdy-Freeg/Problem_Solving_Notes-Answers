#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int max_val = INT_MIN;
    cin >> n;
    
    for (int i =0; i < n; i++) {
        int in;
        cin >> in;

        if (in > max_val) max_val = in;
    }

    cout << max_val;

    return 0;
}