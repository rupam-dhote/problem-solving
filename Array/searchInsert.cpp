// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
using namespace std;

int binarysearch(int* arr,int target,int size)
{
      int start=0;
      int end=size-1;
      int ans=size;
      
      while(start<=end){
           int mid=start+((end-start)/2);
      
            if(arr[mid]>=target){
                  ans=mid;
                  end=mid-1;
            }else{
                  start=mid+1;
            }
      }

      return ans;
}

int main()
{
      int nums[5]={1,3,5,7,9};
      
      cout<<binarysearch(nums,4,5);
 
      return 0;
}