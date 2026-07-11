#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int calPoints(vector<string>& operations) {
    vector<int> res;
    for (int i = 0; i < operations.size(); ++i) {
        if (operations[i][0] == '+') {
            res.push_back(res.back() + res[res.size()-2]);
        } else if(operations[i][0] == 'D') {
            res.push_back(res.back()*2);
        } else if(operations[i][0] == 'C') {
            res.pop_back();
        } else {
            res.push_back(stoi(operations[i]));
        }
    }


    return accumulate(res.begin(), res.end(), 0LL);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> test {"5","2","C","D","+"};
    vector<string> test1 {"5","-2","4","C","D","9","+","+"};
    vector<string> test2 {"1","C"};

    cout << calPoints(test) << "\n";
    cout << calPoints(test1)<< "\n";
    cout << calPoints(test2) << "\n";



    return 0;
}