//merge alternatevly string element
#include<iostream>
#include<string>
using namespace std;

int main(){
     string first,second;
    cin>>first;
    cin>>second;
    int n,m;
    n=first.size(), m=second.size();
    string result;
   int i=0,j=0;
   while(i<n && j<m){
     result.push_back(first[i]);
     i++;
     result.push_back(second[j]);
     j++;
   } 

   while(i<n){
    result.push_back(first[i]);
    i++;
   }

   while(j<m){
    result.push_back(second[j]);
    j++;
   }

   cout<<result;

}
