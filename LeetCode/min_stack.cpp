#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class MinStack {
public:
vector<int> st;
vector<int> min_st;
MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if ( min_st.empty() || val <= min_st.back()) {
            min_st.push_back(val);
        }
    }
    
    void pop() {
        if (min_st.back() == st.back()){
            min_st.pop_back();
        }
        st.pop_back();

    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return min_st.back();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    return 0;
}