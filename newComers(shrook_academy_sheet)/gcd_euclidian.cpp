#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
    while(b != 0) {
        a %= b;
        swap(a,b);
    }
    return a;
}

int main() {

    int a,b;
    cin >> a >> b;

    cout << get_gcd(a ,b) << "\n";

    return 0;
}