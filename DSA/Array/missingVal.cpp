// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
#include<iostream>
#include<vector>
using namespace std;
int missingVal(vector<int> nums){
      if(nums.size()==1&&nums[0]!=0){
            return nums[0]-1;
      }
      int j=nums.size();
      int sum=0;
      int ans=0;
      for(int i=0;i<nums.size();i++){
            
            sum+=j--;
            ans+=nums[i];
            cout<<sum<<" "<<ans<<endl;
      }
      return sum-ans;
}
int main(){
      vector<int> nums={0,1,3,2,4,6};
      cout<<missingVal(nums);
      return 0;
}