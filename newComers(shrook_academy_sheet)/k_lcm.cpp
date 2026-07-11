#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;

        if(n%2 != 0) {
            cout << 1 << " " << (n-1)/2 << " " << (n-1)/2 << "\n";
        } else {
            if(n%4 != 0) {
                cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 <<"\n";
            } else if(n%4 ==0) {
                cout << n/2 << " " << n/4 << " " << n/4 <<"\n";
            }
        }
    }


    return 0;
}