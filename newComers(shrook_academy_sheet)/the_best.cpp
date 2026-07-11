#include <iostream>

using namespace std;

int main() {

    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long min_val{};
    int cnt {};

    min_val = min(min(min(a,b),c),d);

    if(min_val == a) cnt++;
    if(min_val == b) cnt++;
    if(min_val == c) cnt++;
    if(min_val == d) cnt++;

    if (cnt > 1) {
        cout << "Equal";
    } else {
        if (a == min_val) cout << "A";
        if (b == min_val) cout << "B";
        if (c == min_val) cout << "C";
        if (d == min_val) cout << "D";
    }



    return 0;
}