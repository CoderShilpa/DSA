//minimum number of operation to initialize operation
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int pos=1;
    int count = 0;
    while(true){
        if(pos%2==0)
           pos = pos/2;
           else
           pos = n/2+(pos-1)/2;

         count++;
         if(pos==1) break;
    }
    cout<<count;
}