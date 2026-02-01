// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isDup(vector<int> nums){
      if(nums.size()==1){
            return false;
      }

      unordered_map<int,int> map;
      
      for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
      }
      for(auto i:map){
            if(i.second>1)
            return true;
      }
      
      return false;
}
int main(){
      vector<int> nums={1,2,3,2};
      cout<<isDup(nums);
      return 0;
}