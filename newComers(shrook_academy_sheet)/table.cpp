#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    switch (n)
    {
    case 61:
        cout << "Art of computer programming";
        break;
    case 71:
        cout << "Introduction to algorithm";
        break;
    case 11:
        cout << "Competitive programming";
        break;
    case 29:
        cout << "Programming challenges";
        break;
    
    default:
        cout << "Not found";
        break;
    }

    return 0;
}