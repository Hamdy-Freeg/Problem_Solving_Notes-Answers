#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 1;
    bool greatest_cnt = 0;

    for (int i =0; i < s.size() -1; ++i) {
        if (s[i] == s[i+1]) {
            ++cnt;
            if (cnt >= 7) {
                greatest_cnt = 1;
                break;
            }
        } else {
            cnt =1;
        }
    }

    if(greatest_cnt) cout << "YES";
    else cout << "NO";

    return 0;
}