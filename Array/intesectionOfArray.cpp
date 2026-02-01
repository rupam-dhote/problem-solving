// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
vector<int> intersection(vector<int> nums1,vector<int> nums2){
      vector<int> ans;
      unordered_set<int> val;

      for(int i=0;i<nums1.size();i++){
            val.insert(nums1[i]);
      }
     
      for(int j=0;j<nums2.size();j++){
           
            if(val.count(nums2[j])){
                  ans.push_back(nums2[j]);
                  val.erase(nums2[j]);
            }
      }
     
      return ans;
}
int main(){
      vector<int> nums1={1,2,2,3,4,5};
      vector<int> nums2={6,8,3,4,2,9};
      vector<int> ans=intersection(nums1,nums2);
      for (int i = 0; i < ans.size(); i++)
      {
            cout<<ans[i]<<",";
      }
      
      return 0;
}