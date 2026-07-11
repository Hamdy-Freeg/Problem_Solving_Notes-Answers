#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

    double r {};
    cin >> r;

    const double PI = 3.14159265358979323846;

    double area = r*r* PI;

    cout << setprecision(9) << "\n";
    cout << area << "\n";

    return 0;
}