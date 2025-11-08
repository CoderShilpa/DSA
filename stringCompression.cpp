#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<char> result;
    int count = 1;

    for (int i = 1; i <= n; i++) {   // go up to n to handle last group
        if (i < n && arr[i] == arr[i + 1]) {
            count++;
        } else {
            // push previous char
            result.push_back(arr[i - 1]);

            // push count if > 1
            if (count > 0) {
                string str = to_string(count);
                for (char c : str) {
                    result.push_back(c);
                }
            }
            count = 1;
        }
    }

    // print result
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout << endl;

    return 0;
}
