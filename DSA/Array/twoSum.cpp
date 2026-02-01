// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> nums,int target){
      //  int* ans=new int[2];
      //  ans[0]=-1;
      //  ans[1]=-1;

      // for(int i=0;i<4;i++)
      // {
      //       for(int j=i+1;j<4;j++)
      //       {
      //             if((nums[i]+nums[j])==target)
      //             {
      //                   ans[0]=i;
      //                   ans[1]=j;
      //                   return ans;
      //             }
      //       }
      // }

      unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
           int val=target-nums[i];
           if(mp.find(val)!=mp.end()){
            return {i,mp[val]};
           }
            mp[nums[i]]=i;
        }

      return {-1,-1};
}
int main(){
      vector<int> nums={2,7,11,15};
      int target=9;
      
     vector<int> ans=twoSum(nums,target);
      
     for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<",";
     }

      return 0;
}