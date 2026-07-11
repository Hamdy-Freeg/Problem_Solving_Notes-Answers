#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        long long factorial = 1;
        cin >> n;
        for(int i =1; i <= n; ++i) {
            factorial = factorial*i;
        }
        cout << factorial << "\n";
    }

    return 0;
}