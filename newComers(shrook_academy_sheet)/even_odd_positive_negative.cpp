#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int cnt_p = 0;
    int cnt_n = 0;
    int cnt_e = 0;
    int cnt_o = 0;
    
    for (int i =0; i < n; i++) {
        int in;
        cin >> in;

        if (in > 0) ++cnt_p;
        if (in < 0) ++cnt_n;
        if (in%2 == 0) ++cnt_e;
        if (in%2 != 0) ++cnt_o;

    }

    cout << "Even: " << cnt_e 
    << "\nOdd: " << cnt_o 
    << "\nPositive: " << cnt_p 
    <<"\nNegative: " << cnt_n;


    return 0;
}