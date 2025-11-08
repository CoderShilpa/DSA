#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;

    int n = s.size(), m = t.size();
    int i=0,j=0;
    while(i<n && j<m){
      if(s[i]==t[j]){
        i++;
        j++;
      }
      else
       j++;   
    }

    if(i==n)
    cout<<true;
    else
    cout<<false;
}