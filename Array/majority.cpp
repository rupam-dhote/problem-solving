// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int majority(vector<int> nums){
      if(nums.size()==1){
            return nums[0];
      }
      unordered_map<int,int> freq;
      for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
      }
      int count=freq[nums[0]];
      for(auto i:freq){
            if(freq[count]<i.second){
                  count=i.first;
            }
      }

      return count;
      
}
int main(){
      vector<int> nums={1,2,1};
      cout<<majority(nums);
      return 0;
}