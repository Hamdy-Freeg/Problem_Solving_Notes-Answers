#include <iostream>

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
        for(char &ch : s) {
            ch &= '_';
        }
    } else {
        for(char &ch : s) {
            ch |= ' ';
        }
    }
    cout << s;

    return 0;
}