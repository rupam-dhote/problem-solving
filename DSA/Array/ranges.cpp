// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b 
#include<iostream>
#include<vector>
using namespace std;

vector<string> ranges(vector<int> nums){
      vector<string> ans;
      if(nums.size()==0){
            ans.push_back("no");
            return ans;
      }
      int start=nums[0];
      int prev=nums[0];
      for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1){
                  prev=nums[i];
            }else{
                  if(start==prev){
                        ans.push_back(to_string(start));
                  }else{
                        ans.push_back(to_string(start)+"->"+to_string(prev));
                  }
                  start=prev=nums[i];
            }
      }
      if(start==prev){
            ans.push_back(to_string(start));
      }else{
            ans.push_back(to_string(start)+"->"+to_string(prev));
      }
    return ans;
}
int main(){
      vector<int> nums={0,1,2,4,5,6,7};
      vector<string> ans=ranges(nums);
      for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<",";
      }
      return 0;
}