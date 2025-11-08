#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<int>arr(256,-1);
    int maxValue = 0;
    int start = 0;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        
        if(arr[ch]>start){
            start = arr[ch]+1;
        }

        arr[ch]=i;
        maxValue = max(maxValue,i-start+1);
    }
    cout<<maxValue;
    return 0;
}
