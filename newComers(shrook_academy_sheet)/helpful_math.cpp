#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {
    string s;
    cin >> s;

    vector<int> v;

    for (int i =0; i <s.size(); i+=2) {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());

    for(int i=0; i < v.size(); i++) {
        cout << (char)v[i] << (i == v.size()-1 ? "" : "+");
    }

    return 0;
}