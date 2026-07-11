#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        while(n > 0) {
            if(n%2 != 0) {
                cout << "1";
            } else {
                cout <<"0";
            }
            n = n/2;
        }
        cout << "\n";
    }

    return 0;
}