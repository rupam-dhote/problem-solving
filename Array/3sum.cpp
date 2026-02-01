// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// --------------------------not sloved----------------

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& n,int index){
      unordered_map<int,int> mp;
      for(int i=0;i<n.size();i++){
            
      }
      
}
vector<vector<int>> sum3(vector<int>& n){
      vector<vector<int>> ans;
      
      for(int i=0;i<n.size();i++){
           
      }

      return ans;
}
int main(){
      vector<int> n={-1,0,1,2,-1,4};
      vector<vector<int>> ans=sum3(n);

      for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                  cout<<ans[i][j]<<",";
            }
      }
}