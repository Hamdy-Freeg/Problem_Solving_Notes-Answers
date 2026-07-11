#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] {};

    for(int i =0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = arr[0], max_val = arr[0];
    int min_idx =0, max_idx = 0;

    for (int i=0; i < n; i++) {
        if (arr[i] >= max_val) {
            max_val = arr[i];
            max_idx = i;
        }
        if (arr[i] <= min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }

    arr[max_idx] = min_val;
    arr[min_idx] = max_val;

    //printing

    for (int i =0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}