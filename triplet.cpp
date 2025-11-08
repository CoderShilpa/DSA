#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MAX, second = INT_MAX;
    bool check = false;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (x <= first) {
            first = x;
        } else if (x <= second) {
            second = x;
        } else {
            check = true;
            cout << "true";
            return 0;
        }
    }

    cout << "false";
    return 0;
}
