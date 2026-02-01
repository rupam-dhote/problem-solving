// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
#include<iostream>
using namespace std;
int unique(int* arr,int n){
      int ans=0;
      for(int i=0;i<n;i++){
            ans=ans^arr[i];
      }
      return ans;
}
int main(){
      int arr[5]={1,2,1,2,4};
      cout<<unique(arr,5);
      return 0;
}