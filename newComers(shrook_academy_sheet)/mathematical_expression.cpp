#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    char s,q;

    cin >> a >> s >> b >> q >> c ;

    switch (s)
    {
    case '+':
        if (a + b == c) {
            cout << "Yes";
        } else {
            cout << a+b;
        }
        break;
    
    case '-':
    if (a - b == c) {
            cout << "Yes";
        } else {
            cout << a-b;
        }
        break;
    
    case '*':
    if (a * b == c) {
            cout << "Yes";
        } else {
            cout << a*b;
        }
        break;
    
    default:
        break;
    }

    return 0;
}