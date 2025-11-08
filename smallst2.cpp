#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Not enough elements" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > first && arr[i] < second) {
            second = arr[i];
        }
    }

    cout << "Smallest: " << first << endl;
    if (second == INT_MAX) {
        cout << "No second smallest distinct element" << endl;
    } else {
        cout << "Second smallest: " << second << endl;
    }

    return 0;
}
