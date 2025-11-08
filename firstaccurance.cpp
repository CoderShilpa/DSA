#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    int low = 0, high = n - 1;
    int ans = -1;  // to store result index

    while (low <= high) {
        int mid = (low + high) / 2;

        if (k < arr[mid]) {
            high = mid - 1;
        } else if (k > arr[mid]) {
            low = mid + 1;
        } else {
            ans = mid;
            break;   // exit once found
        }
    }

    if (ans != -1)
        cout << ans;     // print index if found
    else
        cout << "Not Found";  // handle case if not found

    return 0;
}
