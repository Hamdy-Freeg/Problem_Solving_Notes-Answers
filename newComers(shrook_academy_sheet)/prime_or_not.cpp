#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int t;
    cin >> t;
    
    
    while(t--) {
        int n;
        cin >> n;
        bool is_prime = true;
        for(int i =2; i*i <= n; i++) {
            if (n%i == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime) {
            cout << "Prime\n";
        } else {
            cout << "Not\n";
        }
    }

    return 0;
}