#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string str, str2;
    cin >> str >> str2;

    vector<char> result;
    int i = 0, j = 0;

    // Merge alternately
    while (i < n || j < m) {
        if (i < n) result.push_back(str[i++]);
        if (j < m) result.push_back(str2[j++]);
    }

    // Print full result
    for (char c : result) {
        cout << c;
    }

    return 0;
}
