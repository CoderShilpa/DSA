//Frequency of Limited Range Array Element
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    vector<int> crr;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // frequency count
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    int p; 
    cin >> p;

    // check for numbers from 1 to p
    for(int i=1; i<=p; i++){
        if(freq.find(i)!= freq.end()){  
            crr.push_back(freq[i]);  // freq[i] gives frequency
        }
        else{
            crr.push_back(0);  // agar element nahi hai to 0 frequency
        }
    }

    // print result
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }

    return 0;
}
