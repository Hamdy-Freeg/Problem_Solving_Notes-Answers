#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int a_ = a, b_ =b, c_ =c;
    
    int temp {};

    if(a > b) swap(a,b);
    if(a > c) swap(a,c);
    if(b > c) swap(b,c);


    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout <<"\n";
    cout << a_ << "\n";
    cout << b_ << "\n";
    cout << c_ << "\n";



    return 0;
}