#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin >> a >> b;
    int gcd{};
    
    if (a%b ==0 || b%a ==0) {
        gcd = min(a,b);
    } else {
        for (int i =1; i <= min(a,b)/2; i++) {
            if (a%i == 0 && b%i ==0) {
                gcd = i;
            }
        }
        
    }
    cout << gcd;



    return 0;
}