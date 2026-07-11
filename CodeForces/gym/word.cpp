#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int lower_cnt = 0;
    int upper_cnt = 0;

    for (char ch : s) {
        if ('A' <= ch && ch <= 'Z') {
            ++upper_cnt;
        }
        if ('a' <= ch && ch <= 'z') {
            ++lower_cnt;
        }
    }
    if(upper_cnt > lower_cnt) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }

    return 0;
}