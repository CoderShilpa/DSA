#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> crr;

    for (int i = 0; i < n; i++) {
        // Add element if it's the first one OR different from previous
        if (i == 0 || arr[i] != arr[i - 1]) {
            crr.push_back(arr[i]);
        }
    }

    for (int k = 0; k < crr.size(); k++) {
        cout << crr[k] << " ";
    }
    cout << endl;

    return 0;
}
