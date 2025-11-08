#include <iostream>
#include <cctype> // for tolower
using namespace std;

bool isVowel(char c) {
    c = tolower(c); // normalize to lowercase
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    string s;
    cin >> s; // directly input the whole string
    int n = s.length();

    int i = 0, j = n - 1;
    while (i < j) {
        if (!isVowel(s[i])) {
            i++;
        }
        else if (!isVowel(s[j])) {
            j--;
        }
        else {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    cout << s << endl; // print final string
}
