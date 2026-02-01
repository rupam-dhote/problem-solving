// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

#include<iostream>

#include<vector>

using namespace std;
vector<int> findMissing(vector<int>& nums){
      int n=nums.size();
      for(int i=0;i<n;i++){
            int idx=abs(nums[i])-1;
           if(nums[idx]>0)
                  nums[idx]=-nums[idx];
            
      }
      vector<int> ans;
      for(int i=0;i<n;i++){
            if(nums[i]>0){
                  ans.push_back(i+1);
            }
      }
      return ans;
}
int main(){
      vector<int> nums={4,3,2,7,8,2,3,1};
      vector<int> ans=findMissing(nums);

      for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
      }

      
     

      return 0;

}