#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int year) { 
    bool freq[10] {false};
    while(year > 0) {
        int num = year % 10;
        if(freq[num]) {
            return false;
        }

        freq[num] = true;
        year /= 10;

    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;
    while (true) {
        y++;
        if (isDistinct(y)) {
            cout << y << '\n';
            break;
        }
    }

    return 0;
}