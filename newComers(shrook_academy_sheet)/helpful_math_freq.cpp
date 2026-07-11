#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int freq_arr[4] ={0};

    for (int i=0; i < s.size(); i+=2) {
        freq_arr[s[i] - '0']++;
    }

    string res = "";

    for (int i =1; i <=3; i++) {
        while(freq_arr[i]--) {
            res += to_string(i) + '+';
        }
    }

    res.pop_back();
    cout << res;
    


    return 0;
}