#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<char> s2;
    int maxValue = 0;

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        bool found = false;
        int pos = -1;

        for(int j = 0; j < s2.size(); j++) {
            if(s2[j] == ch) {
                found = true;
                pos = j;
                break;
            }
        }

        if(!found) {
            s2.push_back(ch);
        } else {
            maxValue = max(maxValue, (int)s2.size());
            s2.erase(s2.begin(), s2.begin() + pos + 1);
            s2.push_back(ch);
        }
    }

    maxValue = max(maxValue, (int)s2.size());

    cout << maxValue;
    return 0;
}
