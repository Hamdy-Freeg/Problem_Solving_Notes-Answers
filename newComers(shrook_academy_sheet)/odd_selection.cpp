#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,x;
        cin >> n >> x;
        int cnt_e=0, cnt_o=0;
        for (int i=0; i < n; i++) {
            int a;
            cin >> a;
            if (a%2 ==0) cnt_e++;
            if (a%2 ==0) cnt_o++;
        }

    }

    return 0;
}