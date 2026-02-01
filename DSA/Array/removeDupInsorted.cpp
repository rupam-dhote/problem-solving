// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

#include<iostream>
using namespace std;

int removeDup(int* arr,int size){
      
      if(size==1){
            return 1;
      }
      int k=1;
      
      int dup=arr[0];
      for(int i=1;i<size;i++){
        if(arr[i]!=dup){
            dup=arr[i];
            arr[k]=dup;
            k++;
        }
      }

      return k;
}
int main()
{
      int arr[5]={1,1,2,3,3};
      
      int k=removeDup(arr,5);
      for(int i=0;i<k;i++){
            cout<<arr[i]<<",";
      }
      return 0;
}