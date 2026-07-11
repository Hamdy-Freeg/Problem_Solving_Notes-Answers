#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<int> replaceElements(vector<int>& arr) {
    int curr_domination = -1;
    for (int i = arr.size()-1; i >= 0; --i) {
    
        int temp;
        if(arr[i] > curr_domination) {
            temp = arr[i];
            arr[i] = curr_domination;
            curr_domination = temp;
        } else {
            arr[i] = curr_domination;
        }


    }
    return arr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> test {17,18,5,4,6,1};
    vector<int> res = replaceElements(test);
    for (int i=0; i < res.size(); ++i) {
        cout << res[i] << ' ';
    }


    return 0;
}