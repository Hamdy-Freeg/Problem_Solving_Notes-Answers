#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    cout << 1 << "\n";

    for (int i =2; i <= n/2; i++) {
        if(n%i == 0) {
            cout << i << "\n";
        }
    }

    cout << n <<"\n";


    return 0;
}