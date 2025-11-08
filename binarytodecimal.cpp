#include<iostream>
#include<math.h>
#include<math.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int count=0;
 int result=0;
while(n!=0){
    int number = n%10;
    result+=number*pow(2,count);
    n=n/10;
    count++;
}
   cout<<result;
}