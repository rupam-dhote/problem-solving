// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.
#include<iostream>
#include<vector>

using namespace std;
int binarySearch(vector<int> nums,int target){
      int s=0;
      int e=nums.size()-1;
      int mid=s+(e-s)/2;

      while(s<=e){
            if(nums[mid]==target){
                  return mid;
            }

            if(nums[mid]<target){
                  s=mid+1;
            }else{
                  e=mid-1;
            }

            mid=s+(e-s)/2;
      }
      return -1;
}
int main()
{
      vector<int> nums={-1,0,3,5,9,12};
      int target=9;

      cout<<binarySearch(nums,target);
      return 0;
}