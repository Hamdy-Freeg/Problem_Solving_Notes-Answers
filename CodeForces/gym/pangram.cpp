#include<bits/stdc++.h>

using namespace std;

int main() {

    
    int n;
    string s; 
    map<char , bool> mp;
    cin >> n;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s) {
        mp[c] = true;
    }

    if (mp.size() == 26) {
        cout << "YES  \n" ; 
    } else {
        cout << "NO \n";
    }
    

    return 0;
}