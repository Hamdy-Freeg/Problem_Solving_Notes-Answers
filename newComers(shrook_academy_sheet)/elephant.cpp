#include <iostream>

using namespace std ;

int main() {

    int n;
    cin >> n;

    int steps_5 = n / 5;
    n = n%5;
    int steps_4 = n / 4;
    n = n%4;
    int steps_3 = n / 3;
    n = n%3;
    int steps_2 = n / 2;
    n = n%2;
    int steps_1 = n / 1; 
    n = n%2;

    cout << steps_1 + steps_2 + steps_3 + steps_4 + steps_5;

    return 0;
}