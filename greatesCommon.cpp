#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if (str1 + str2 == str2 + str1) {
        int temp = gcd((int)str1.size(), (int)str2.size());
        cout << str1.substr(0, temp) << endl;
    } else {
        cout << "" << endl;
    }

    return 0;
}
