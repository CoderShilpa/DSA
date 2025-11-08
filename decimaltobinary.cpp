#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;

    while (n != 0) {
        int number = n % 2;
        s.push(number);
        n = n / 2;
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
