#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int years = n/365;
    n = n%365;
    int months = n/30;
    n = n%30;
    int days = n;

    cout << years << " years\n" << months << " months\n" << days << " days\n";



    return 0;
}