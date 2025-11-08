#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int left=0, right=n-1;
    int maxArea = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(left<right){
        int h = min(arr[left],arr[right]);
        int w = right-left;
        maxArea = max(maxArea, h*w);

        if(arr[left]<arr[right]){
            left--;
        }else
        right--;
    }
    cout<<maxArea;

}