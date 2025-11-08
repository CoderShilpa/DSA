#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    cin >> k;

    // Use vector instead of raw array
    vector<int> candies(n);
    vector<bool> arr;

    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    int maxVal = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); i++) {
        int sum = candies[i] + k;
        if (sum >= maxVal) {
            arr.push_back(true);   // use bool, not string
        } else {
            arr.push_back(false);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << (arr[i] ? "true " : "false ");
    }

    return 0;
}
