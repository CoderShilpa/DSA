#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];

    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int j = 0; j < m; j++) cin >> a2[j];

    bool isSubset = true;

    // for (int i = 0; i < m; i++) {
    //     bool found = false;
    //     for (int j = 0; j < n; j++) {
    //         if (a2[i] == a1[j]) {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found) {      // agar koi element nahi mila
    //         isSubset = false;
    //         break;
    //     }
    // }
  
     unordered_set<int>s;
     for(int i=0;i<n;i++){
        s.insert(a1[i]);
     }

     for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end()){
            isSubset = false;
            break;
        }
     }

    if (isSubset)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
