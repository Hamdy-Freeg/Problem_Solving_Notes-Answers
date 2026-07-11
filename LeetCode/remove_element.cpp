#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int removeElement(vector<int>& nums, int val) {
    
    int k =0;
    for (int i =0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            ++k;
        }
    }
    return k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums {0,1,2,2,3,0,4,2};
    cout << removeElement(nums, 0) << "\n";
    for(int i =0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    

    return 0;
}