#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max_consecutive = 0;
    int consecutive_counter = 0;
    for (int i =0; i < nums.size(); ++i) {
        if (nums[i] == 1) {
            consecutive_counter++;
            max_consecutive = max(max_consecutive, consecutive_counter);
        } else {
            consecutive_counter = 0;
        }
    }

    return max_consecutive;     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums {1,1,0,1,1,1,1};

    int result = findMaxConsecutiveOnes(nums);

    cout << result;

    return 0;
}